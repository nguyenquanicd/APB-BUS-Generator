`timescale 1ns/1ps

module tb;
  localparam int ADDR_W = 24;
  localparam int DATA_W = 32;
  localparam int SLV_MEM_AW = 16;

  logic clk;
  logic rst_n;

  logic [ADDR_W-1:0] cpu0_paddr;
  logic [DATA_W-1:0] cpu0_pwdata;
  logic [DATA_W-1:0] cpu0_prdata;
  logic              cpu0_pwrite;
  logic              cpu0_psel;
  logic              cpu0_penable;
  logic              cpu0_pready;
  logic              cpu0_pslverr;
  logic [3:0]        cpu0_pstrb;
  logic [2:0]        cpu0_pprot;

  logic [ADDR_W-1:0] cpu1_paddr;
  logic [DATA_W-1:0] cpu1_pwdata;
  logic [DATA_W-1:0] cpu1_prdata;
  logic              cpu1_pwrite;
  logic              cpu1_psel;
  logic              cpu1_penable;
  logic              cpu1_pready;
  logic              cpu1_pslverr;
  logic [3:0]        cpu1_pstrb;
  logic [2:0]        cpu1_pprot;

  logic [ADDR_W-1:0] gpu_paddr;
  logic [DATA_W-1:0] gpu_pwdata;
  logic [DATA_W-1:0] gpu_prdata;
  logic              gpu_pwrite;
  logic              gpu_psel;
  logic              gpu_penable;
  logic              gpu_pready;
  logic              gpu_pslverr;
  logic [3:0]        gpu_pstrb;
  logic [2:0]        gpu_pprot;

  logic [ADDR_W-1:0] npu_paddr;
  logic [DATA_W-1:0] npu_pwdata;
  logic [DATA_W-1:0] npu_prdata;
  logic              npu_pwrite;
  logic              npu_psel;
  logic              npu_penable;
  logic              npu_pready;
  logic              npu_pslverr;
  logic [3:0]        npu_pstrb;
  logic [2:0]        npu_pprot;

  logic [ADDR_W-1:0] tpu_paddr;
  logic [DATA_W-1:0] tpu_pwdata;
  logic [DATA_W-1:0] tpu_prdata;
  logic              tpu_pwrite;
  logic              tpu_psel;
  logic              tpu_penable;
  logic              tpu_pready;
  logic              tpu_pslverr;
  logic [3:0]        tpu_pstrb;
  logic [2:0]        tpu_pprot;

  logic [ADDR_W-1:0] ppu_paddr;
  logic [DATA_W-1:0] ppu_pwdata;
  logic [DATA_W-1:0] ppu_prdata;
  logic              ppu_pwrite;
  logic              ppu_psel;
  logic              ppu_penable;
  logic              ppu_pready;
  logic              ppu_pslverr;
  logic [3:0]        ppu_pstrb;
  logic [2:0]        ppu_pprot;

  logic [ADDR_W-1:0] uart_paddr;
  logic              uart_protect_en;
  logic              uart_slverr_en;
  logic [2:0]        uart_pprot;
  logic [DATA_W-1:0] uart_pwdata;
  logic              uart_pwrite;
  logic              uart_penable;
  logic              uart_psel;
  logic [3:0]        uart_pstrb;
  logic              uart_pslverr;
  logic              uart_pready;
  logic [DATA_W-1:0] uart_prdata;

  logic [ADDR_W-1:0] i2c_paddr;
  logic              i2c_protect_en;
  logic              i2c_slverr_en;
  logic [2:0]        i2c_pprot;
  logic [DATA_W-1:0] i2c_pwdata;
  logic              i2c_pwrite;
  logic              i2c_penable;
  logic              i2c_psel;
  logic [3:0]        i2c_pstrb;
  logic              i2c_pslverr;
  logic              i2c_pready;
  logic [DATA_W-1:0] i2c_prdata;

  logic [ADDR_W-1:0] spi_paddr;
  logic              spi_protect_en;
  logic              spi_slverr_en;
  logic [2:0]        spi_pprot;
  logic [DATA_W-1:0] spi_pwdata;
  logic              spi_pwrite;
  logic              spi_penable;
  logic              spi_psel;
  logic [3:0]        spi_pstrb;
  logic              spi_pslverr;
  logic              spi_pready;
  logic [DATA_W-1:0] spi_prdata;

  logic [ADDR_W-1:0] can_paddr;
  logic              can_protect_en;
  logic              can_slverr_en;
  logic [2:0]        can_pprot;
  logic [DATA_W-1:0] can_pwdata;
  logic              can_pwrite;
  logic              can_penable;
  logic              can_psel;
  logic [3:0]        can_pstrb;
  logic              can_pslverr;
  logic              can_pready;
  logic [DATA_W-1:0] can_prdata;

  logic [ADDR_W-1:0] pwm_paddr;
  logic              pwm_protect_en;
  logic              pwm_slverr_en;
  logic [2:0]        pwm_pprot;
  logic [DATA_W-1:0] pwm_pwdata;
  logic              pwm_pwrite;
  logic              pwm_penable;
  logic              pwm_psel;
  logic [3:0]        pwm_pstrb;
  logic              pwm_pslverr;
  logic              pwm_pready;
  logic [DATA_W-1:0] pwm_prdata;

  logic [ADDR_W-1:0] pcie_paddr;
  logic              pcie_protect_en;
  logic              pcie_slverr_en;
  logic [2:0]        pcie_pprot;
  logic [DATA_W-1:0] pcie_pwdata;
  logic              pcie_pwrite;
  logic              pcie_penable;
  logic              pcie_psel;
  logic [3:0]        pcie_pstrb;
  logic              pcie_pslverr;
  logic              pcie_pready;
  logic [DATA_W-1:0] pcie_prdata;

  logic [31:0] rdata;
  int error_count;

  always #5 clk = ~clk;

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_cpu0_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(cpu0_paddr), .o_pwdata(cpu0_pwdata), .i_prdata(cpu0_prdata),
    .o_pwrite(cpu0_pwrite), .o_psel(cpu0_psel), .o_penable(cpu0_penable),
    .i_pready(cpu0_pready), .o_pstrb(cpu0_pstrb), .o_pprot(cpu0_pprot)
  );

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_cpu1_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(cpu1_paddr), .o_pwdata(cpu1_pwdata), .i_prdata(cpu1_prdata),
    .o_pwrite(cpu1_pwrite), .o_psel(cpu1_psel), .o_penable(cpu1_penable),
    .i_pready(cpu1_pready), .o_pstrb(cpu1_pstrb), .o_pprot(cpu1_pprot)
  );

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_gpu_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(gpu_paddr), .o_pwdata(gpu_pwdata), .i_prdata(gpu_prdata),
    .o_pwrite(gpu_pwrite), .o_psel(gpu_psel), .o_penable(gpu_penable),
    .i_pready(gpu_pready), .o_pstrb(gpu_pstrb), .o_pprot(gpu_pprot)
  );

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_npu_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(npu_paddr), .o_pwdata(npu_pwdata), .i_prdata(npu_prdata),
    .o_pwrite(npu_pwrite), .o_psel(npu_psel), .o_penable(npu_penable),
    .i_pready(npu_pready), .o_pstrb(npu_pstrb), .o_pprot(npu_pprot)
  );

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_tpu_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(tpu_paddr), .o_pwdata(tpu_pwdata), .i_prdata(tpu_prdata),
    .o_pwrite(tpu_pwrite), .o_psel(tpu_psel), .o_penable(tpu_penable),
    .i_pready(tpu_pready), .o_pstrb(tpu_pstrb), .o_pprot(tpu_pprot)
  );

  apb_master_bfm #(.PARA_ADDR_WIDTH(ADDR_W), .PARA_DATA_WIDTH(DATA_W)) u_ppu_bfm (
    .i_clk(clk), .i_rst_n(rst_n),
    .o_paddr(ppu_paddr), .o_pwdata(ppu_pwdata), .i_prdata(ppu_prdata),
    .o_pwrite(ppu_pwrite), .o_psel(ppu_psel), .o_penable(ppu_penable),
    .i_pready(ppu_pready), .o_pstrb(ppu_pstrb), .o_pprot(ppu_pprot)
  );

  m_vlsi_apb_router u_dut (
    .i_clk(clk),
    .i_rstn(rst_n),
    .i_paddr_cpu0(cpu0_paddr), .i_protect_en_cpu0(1'b0), .i_slverr_en_cpu0(1'b0),
    .i_pprot_cpu0(cpu0_pprot), .i_pwdata_cpu0(cpu0_pwdata), .i_pwrite_cpu0(cpu0_pwrite),
    .i_penable_cpu0(cpu0_penable), .i_psel_cpu0(cpu0_psel), .i_pstrb_cpu0(cpu0_pstrb),
    .o_pslverr_cpu0(cpu0_pslverr), .o_pready_cpu0(cpu0_pready), .o_prdata_cpu0(cpu0_prdata),
    .i_paddr_cpu1(cpu1_paddr), .i_protect_en_cpu1(1'b0), .i_slverr_en_cpu1(1'b0),
    .i_pprot_cpu1(cpu1_pprot), .i_pwdata_cpu1(cpu1_pwdata), .i_pwrite_cpu1(cpu1_pwrite),
    .i_penable_cpu1(cpu1_penable), .i_psel_cpu1(cpu1_psel), .i_pstrb_cpu1(cpu1_pstrb),
    .o_pslverr_cpu1(cpu1_pslverr), .o_pready_cpu1(cpu1_pready), .o_prdata_cpu1(cpu1_prdata),
    .i_paddr_gpu(gpu_paddr), .i_protect_en_gpu(1'b0), .i_slverr_en_gpu(1'b0),
    .i_pprot_gpu(gpu_pprot), .i_pwdata_gpu(gpu_pwdata), .i_pwrite_gpu(gpu_pwrite),
    .i_penable_gpu(gpu_penable), .i_psel_gpu(gpu_psel), .i_pstrb_gpu(gpu_pstrb),
    .o_pslverr_gpu(gpu_pslverr), .o_pready_gpu(gpu_pready), .o_prdata_gpu(gpu_prdata),
    .i_paddr_npu(npu_paddr), .i_protect_en_npu(1'b0), .i_slverr_en_npu(1'b0),
    .i_pprot_npu(npu_pprot), .i_pwdata_npu(npu_pwdata), .i_pwrite_npu(npu_pwrite),
    .i_penable_npu(npu_penable), .i_psel_npu(npu_psel), .i_pstrb_npu(npu_pstrb),
    .o_pslverr_npu(npu_pslverr), .o_pready_npu(npu_pready), .o_prdata_npu(npu_prdata),
    .i_paddr_tpu(tpu_paddr), .i_protect_en_tpu(1'b0), .i_slverr_en_tpu(1'b0),
    .i_pprot_tpu(tpu_pprot), .i_pwdata_tpu(tpu_pwdata), .i_pwrite_tpu(tpu_pwrite),
    .i_penable_tpu(tpu_penable), .i_psel_tpu(tpu_psel), .i_pstrb_tpu(tpu_pstrb),
    .o_pslverr_tpu(tpu_pslverr), .o_pready_tpu(tpu_pready), .o_prdata_tpu(tpu_prdata),
    .i_paddr_ppu(ppu_paddr), .i_protect_en_ppu(1'b0), .i_slverr_en_ppu(1'b0),
    .i_pprot_ppu(ppu_pprot), .i_pwdata_ppu(ppu_pwdata), .i_pwrite_ppu(ppu_pwrite),
    .i_penable_ppu(ppu_penable), .i_psel_ppu(ppu_psel), .i_pstrb_ppu(ppu_pstrb),
    .o_pslverr_ppu(ppu_pslverr), .o_pready_ppu(ppu_pready), .o_prdata_ppu(ppu_prdata),
    .o_paddr_uart(uart_paddr), .o_protect_en_uart(uart_protect_en), .o_slverr_en_uart(uart_slverr_en),
    .o_pprot_uart(uart_pprot), .o_pwdata_uart(uart_pwdata), .o_pwrite_uart(uart_pwrite),
    .o_penable_uart(uart_penable), .o_psel_uart(uart_psel), .o_pstrb_uart(uart_pstrb),
    .i_pslverr_uart(uart_pslverr), .i_pready_uart(uart_pready), .i_prdata_uart(uart_prdata),
    .o_paddr_i2c(i2c_paddr), .o_protect_en_i2c(i2c_protect_en), .o_slverr_en_i2c(i2c_slverr_en),
    .o_pprot_i2c(i2c_pprot), .o_pwdata_i2c(i2c_pwdata), .o_pwrite_i2c(i2c_pwrite),
    .o_penable_i2c(i2c_penable), .o_psel_i2c(i2c_psel), .o_pstrb_i2c(i2c_pstrb),
    .i_pslverr_i2c(i2c_pslverr), .i_pready_i2c(i2c_pready), .i_prdata_i2c(i2c_prdata),
    .o_paddr_spi(spi_paddr), .o_protect_en_spi(spi_protect_en), .o_slverr_en_spi(spi_slverr_en),
    .o_pprot_spi(spi_pprot), .o_pwdata_spi(spi_pwdata), .o_pwrite_spi(spi_pwrite),
    .o_penable_spi(spi_penable), .o_psel_spi(spi_psel), .o_pstrb_spi(spi_pstrb),
    .i_pslverr_spi(spi_pslverr), .i_pready_spi(spi_pready), .i_prdata_spi(spi_prdata),
    .o_paddr_can(can_paddr), .o_protect_en_can(can_protect_en), .o_slverr_en_can(can_slverr_en),
    .o_pprot_can(can_pprot), .o_pwdata_can(can_pwdata), .o_pwrite_can(can_pwrite),
    .o_penable_can(can_penable), .o_psel_can(can_psel), .o_pstrb_can(can_pstrb),
    .i_pslverr_can(can_pslverr), .i_pready_can(can_pready), .i_prdata_can(can_prdata),
    .o_paddr_pwm(pwm_paddr), .o_protect_en_pwm(pwm_protect_en), .o_slverr_en_pwm(pwm_slverr_en),
    .o_pprot_pwm(pwm_pprot), .o_pwdata_pwm(pwm_pwdata), .o_pwrite_pwm(pwm_pwrite),
    .o_penable_pwm(pwm_penable), .o_psel_pwm(pwm_psel), .o_pstrb_pwm(pwm_pstrb),
    .i_pslverr_pwm(pwm_pslverr), .i_pready_pwm(pwm_pready), .i_prdata_pwm(pwm_prdata),
    .o_paddr_pcie(pcie_paddr), .o_protect_en_pcie(pcie_protect_en), .o_slverr_en_pcie(pcie_slverr_en),
    .o_pprot_pcie(pcie_pprot), .o_pwdata_pcie(pcie_pwdata), .o_pwrite_pcie(pcie_pwrite),
    .o_penable_pcie(pcie_penable), .o_psel_pcie(pcie_psel), .o_pstrb_pcie(pcie_pstrb),
    .i_pslverr_pcie(pcie_pslverr), .i_pready_pcie(pcie_pready), .i_prdata_pcie(pcie_prdata)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_uart_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(uart_paddr[SLV_MEM_AW-1:0]), .i_pwdata(uart_pwdata), .o_prdata(uart_prdata),
    .i_pwrite(uart_pwrite), .i_psel(uart_psel), .i_penable(uart_penable), .o_pready(uart_pready),
    .o_pslverr(uart_pslverr), .i_pstrb(uart_pstrb), .i_pprot(uart_pprot)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_i2c_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(i2c_paddr[SLV_MEM_AW-1:0]), .i_pwdata(i2c_pwdata), .o_prdata(i2c_prdata),
    .i_pwrite(i2c_pwrite), .i_psel(i2c_psel), .i_penable(i2c_penable), .o_pready(i2c_pready),
    .o_pslverr(i2c_pslverr), .i_pstrb(i2c_pstrb), .i_pprot(i2c_pprot)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_spi_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(spi_paddr[SLV_MEM_AW-1:0]), .i_pwdata(spi_pwdata), .o_prdata(spi_prdata),
    .i_pwrite(spi_pwrite), .i_psel(spi_psel), .i_penable(spi_penable), .o_pready(spi_pready),
    .o_pslverr(spi_pslverr), .i_pstrb(spi_pstrb), .i_pprot(spi_pprot)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_can_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(can_paddr[SLV_MEM_AW-1:0]), .i_pwdata(can_pwdata), .o_prdata(can_prdata),
    .i_pwrite(can_pwrite), .i_psel(can_psel), .i_penable(can_penable), .o_pready(can_pready),
    .o_pslverr(can_pslverr), .i_pstrb(can_pstrb), .i_pprot(can_pprot)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_pwm_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(pwm_paddr[SLV_MEM_AW-1:0]), .i_pwdata(pwm_pwdata), .o_prdata(pwm_prdata),
    .i_pwrite(pwm_pwrite), .i_psel(pwm_psel), .i_penable(pwm_penable), .o_pready(pwm_pready),
    .o_pslverr(pwm_pslverr), .i_pstrb(pwm_pstrb), .i_pprot(pwm_pprot)
  );

  apb_slave_bfm #(
    .PARA_ADDR_WIDTH(SLV_MEM_AW),
    .PARA_DATA_WIDTH(DATA_W),
    .PARA_APB_WAIT_STATES(1)
  ) u_pcie_bfm (
    .i_clk(clk), .i_rst_n(rst_n), .i_paddr(pcie_paddr[SLV_MEM_AW-1:0]), .i_pwdata(pcie_pwdata), .o_prdata(pcie_prdata),
    .i_pwrite(pcie_pwrite), .i_psel(pcie_psel), .i_penable(pcie_penable), .o_pready(pcie_pready),
    .o_pslverr(pcie_pslverr), .i_pstrb(pcie_pstrb), .i_pprot(pcie_pprot)
  );

  logic              uart_psel_d;
  logic              uart_penable_d;
  logic [ADDR_W-1:0] uart_paddr_d;
  logic              uart_pwrite_d;
  logic [3:0]        uart_pstrb_d;
  logic [2:0]        uart_pprot_d;
  logic [DATA_W-1:0] uart_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      uart_psel_d    <= 1'b0;
      uart_penable_d <= 1'b0;
      uart_paddr_d   <= '0;
      uart_pwrite_d  <= 1'b0;
      uart_pstrb_d   <= '0;
      uart_pprot_d   <= '0;
      uart_pwdata_d  <= '0;
    end else begin
      if (uart_psel && uart_penable && !uart_penable_d) begin
        if (!uart_psel_d) begin
          $display("[FAIL] APB setup/access violation on UART @%0t", $time);
          error_count++;
        end
      end
      if (uart_psel && uart_penable && uart_psel_d && uart_penable_d) begin
        if ((uart_paddr_d !== uart_paddr) || (uart_pwrite_d !== uart_pwrite) || (uart_pstrb_d !== uart_pstrb) || (uart_pprot_d !== uart_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on UART @%0t", $time);
          error_count++;
        end
        if (uart_pwrite && (uart_pwdata_d !== uart_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on UART @%0t", $time);
          error_count++;
        end
      end
      uart_psel_d    <= uart_psel;
      uart_penable_d <= uart_penable;
      uart_paddr_d   <= uart_paddr;
      uart_pwrite_d  <= uart_pwrite;
      uart_pstrb_d   <= uart_pstrb;
      uart_pprot_d   <= uart_pprot;
      uart_pwdata_d  <= uart_pwdata;
    end
  end

  logic              i2c_psel_d;
  logic              i2c_penable_d;
  logic [ADDR_W-1:0] i2c_paddr_d;
  logic              i2c_pwrite_d;
  logic [3:0]        i2c_pstrb_d;
  logic [2:0]        i2c_pprot_d;
  logic [DATA_W-1:0] i2c_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      i2c_psel_d    <= 1'b0;
      i2c_penable_d <= 1'b0;
      i2c_paddr_d   <= '0;
      i2c_pwrite_d  <= 1'b0;
      i2c_pstrb_d   <= '0;
      i2c_pprot_d   <= '0;
      i2c_pwdata_d  <= '0;
    end else begin
      if (i2c_psel && i2c_penable && !i2c_penable_d) begin
        if (!i2c_psel_d) begin
          $display("[FAIL] APB setup/access violation on I2C @%0t", $time);
          error_count++;
        end
      end
      if (i2c_psel && i2c_penable && i2c_psel_d && i2c_penable_d) begin
        if ((i2c_paddr_d !== i2c_paddr) || (i2c_pwrite_d !== i2c_pwrite) || (i2c_pstrb_d !== i2c_pstrb) || (i2c_pprot_d !== i2c_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on I2C @%0t", $time);
          error_count++;
        end
        if (i2c_pwrite && (i2c_pwdata_d !== i2c_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on I2C @%0t", $time);
          error_count++;
        end
      end
      i2c_psel_d    <= i2c_psel;
      i2c_penable_d <= i2c_penable;
      i2c_paddr_d   <= i2c_paddr;
      i2c_pwrite_d  <= i2c_pwrite;
      i2c_pstrb_d   <= i2c_pstrb;
      i2c_pprot_d   <= i2c_pprot;
      i2c_pwdata_d  <= i2c_pwdata;
    end
  end

  logic              spi_psel_d;
  logic              spi_penable_d;
  logic [ADDR_W-1:0] spi_paddr_d;
  logic              spi_pwrite_d;
  logic [3:0]        spi_pstrb_d;
  logic [2:0]        spi_pprot_d;
  logic [DATA_W-1:0] spi_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      spi_psel_d    <= 1'b0;
      spi_penable_d <= 1'b0;
      spi_paddr_d   <= '0;
      spi_pwrite_d  <= 1'b0;
      spi_pstrb_d   <= '0;
      spi_pprot_d   <= '0;
      spi_pwdata_d  <= '0;
    end else begin
      if (spi_psel && spi_penable && !spi_penable_d) begin
        if (!spi_psel_d) begin
          $display("[FAIL] APB setup/access violation on SPI @%0t", $time);
          error_count++;
        end
      end
      if (spi_psel && spi_penable && spi_psel_d && spi_penable_d) begin
        if ((spi_paddr_d !== spi_paddr) || (spi_pwrite_d !== spi_pwrite) || (spi_pstrb_d !== spi_pstrb) || (spi_pprot_d !== spi_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on SPI @%0t", $time);
          error_count++;
        end
        if (spi_pwrite && (spi_pwdata_d !== spi_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on SPI @%0t", $time);
          error_count++;
        end
      end
      spi_psel_d    <= spi_psel;
      spi_penable_d <= spi_penable;
      spi_paddr_d   <= spi_paddr;
      spi_pwrite_d  <= spi_pwrite;
      spi_pstrb_d   <= spi_pstrb;
      spi_pprot_d   <= spi_pprot;
      spi_pwdata_d  <= spi_pwdata;
    end
  end

  logic              can_psel_d;
  logic              can_penable_d;
  logic [ADDR_W-1:0] can_paddr_d;
  logic              can_pwrite_d;
  logic [3:0]        can_pstrb_d;
  logic [2:0]        can_pprot_d;
  logic [DATA_W-1:0] can_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      can_psel_d    <= 1'b0;
      can_penable_d <= 1'b0;
      can_paddr_d   <= '0;
      can_pwrite_d  <= 1'b0;
      can_pstrb_d   <= '0;
      can_pprot_d   <= '0;
      can_pwdata_d  <= '0;
    end else begin
      if (can_psel && can_penable && !can_penable_d) begin
        if (!can_psel_d) begin
          $display("[FAIL] APB setup/access violation on CAN @%0t", $time);
          error_count++;
        end
      end
      if (can_psel && can_penable && can_psel_d && can_penable_d) begin
        if ((can_paddr_d !== can_paddr) || (can_pwrite_d !== can_pwrite) || (can_pstrb_d !== can_pstrb) || (can_pprot_d !== can_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on CAN @%0t", $time);
          error_count++;
        end
        if (can_pwrite && (can_pwdata_d !== can_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on CAN @%0t", $time);
          error_count++;
        end
      end
      can_psel_d    <= can_psel;
      can_penable_d <= can_penable;
      can_paddr_d   <= can_paddr;
      can_pwrite_d  <= can_pwrite;
      can_pstrb_d   <= can_pstrb;
      can_pprot_d   <= can_pprot;
      can_pwdata_d  <= can_pwdata;
    end
  end

  logic              pwm_psel_d;
  logic              pwm_penable_d;
  logic [ADDR_W-1:0] pwm_paddr_d;
  logic              pwm_pwrite_d;
  logic [3:0]        pwm_pstrb_d;
  logic [2:0]        pwm_pprot_d;
  logic [DATA_W-1:0] pwm_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pwm_psel_d    <= 1'b0;
      pwm_penable_d <= 1'b0;
      pwm_paddr_d   <= '0;
      pwm_pwrite_d  <= 1'b0;
      pwm_pstrb_d   <= '0;
      pwm_pprot_d   <= '0;
      pwm_pwdata_d  <= '0;
    end else begin
      if (pwm_psel && pwm_penable && !pwm_penable_d) begin
        if (!pwm_psel_d) begin
          $display("[FAIL] APB setup/access violation on PWM @%0t", $time);
          error_count++;
        end
      end
      if (pwm_psel && pwm_penable && pwm_psel_d && pwm_penable_d) begin
        if ((pwm_paddr_d !== pwm_paddr) || (pwm_pwrite_d !== pwm_pwrite) || (pwm_pstrb_d !== pwm_pstrb) || (pwm_pprot_d !== pwm_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on PWM @%0t", $time);
          error_count++;
        end
        if (pwm_pwrite && (pwm_pwdata_d !== pwm_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on PWM @%0t", $time);
          error_count++;
        end
      end
      pwm_psel_d    <= pwm_psel;
      pwm_penable_d <= pwm_penable;
      pwm_paddr_d   <= pwm_paddr;
      pwm_pwrite_d  <= pwm_pwrite;
      pwm_pstrb_d   <= pwm_pstrb;
      pwm_pprot_d   <= pwm_pprot;
      pwm_pwdata_d  <= pwm_pwdata;
    end
  end

  logic              pcie_psel_d;
  logic              pcie_penable_d;
  logic [ADDR_W-1:0] pcie_paddr_d;
  logic              pcie_pwrite_d;
  logic [3:0]        pcie_pstrb_d;
  logic [2:0]        pcie_pprot_d;
  logic [DATA_W-1:0] pcie_pwdata_d;
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pcie_psel_d    <= 1'b0;
      pcie_penable_d <= 1'b0;
      pcie_paddr_d   <= '0;
      pcie_pwrite_d  <= 1'b0;
      pcie_pstrb_d   <= '0;
      pcie_pprot_d   <= '0;
      pcie_pwdata_d  <= '0;
    end else begin
      if (pcie_psel && pcie_penable && !pcie_penable_d) begin
        if (!pcie_psel_d) begin
          $display("[FAIL] APB setup/access violation on PCIE @%0t", $time);
          error_count++;
        end
      end
      if (pcie_psel && pcie_penable && pcie_psel_d && pcie_penable_d) begin
        if ((pcie_paddr_d !== pcie_paddr) || (pcie_pwrite_d !== pcie_pwrite) || (pcie_pstrb_d !== pcie_pstrb) || (pcie_pprot_d !== pcie_pprot)) begin
          $display("[FAIL] APB control changed between SETUP/ACCESS on PCIE @%0t", $time);
          error_count++;
        end
        if (pcie_pwrite && (pcie_pwdata_d !== pcie_pwdata)) begin
          $display("[FAIL] APB pwdata changed between SETUP/ACCESS on PCIE @%0t", $time);
          error_count++;
        end
      end
      pcie_psel_d    <= pcie_psel;
      pcie_penable_d <= pcie_penable;
      pcie_paddr_d   <= pcie_paddr;
      pcie_pwrite_d  <= pcie_pwrite;
      pcie_pstrb_d   <= pcie_pstrb;
      pcie_pprot_d   <= pcie_pprot;
      pcie_pwdata_d  <= pcie_pwdata;
    end
  end

  task automatic check_data(input string tag, input logic [31:0] got, input logic [31:0] exp);
    if (got !== exp) begin
      $display("[FAIL] %s got=0x%08h exp=0x%08h @%0t", tag, got, exp, $time);
      error_count++;
    end else begin
      $display("[PASS] %s data=0x%08h @%0t", tag, got, $time);
    end
  endtask

  initial begin
`ifdef VCS
    $fsdbDumpfile("wave.fsdb");
    $fsdbDumpvars(0, tb, "+all");
`endif
    $dumpfile("wave.vcd");
    $dumpvars(0, tb);
    clk = 1'b0;
    rst_n = 1'b0;
    error_count = 0;
    repeat (5) @(posedge clk);
    rst_n = 1'b1;
    repeat (3) @(posedge clk);

    fork : txn_1
      begin
        $display("Running CPU0->UART @ 0x00000000");
        u_cpu0_bfm.write(32'h00000000, 32'hA5000101);
        u_cpu0_bfm.read(32'h00000000, rdata);
        check_data("CPU0->UART", rdata, 32'hA5000101);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU0->UART transaction");
        error_count++;
      end
    join_any
    disable txn_1;

    fork : txn_2
      begin
        $display("Running CPU0->I2C @ 0x00010000");
        u_cpu0_bfm.write(32'h00010000, 32'hA5000202);
        u_cpu0_bfm.read(32'h00010000, rdata);
        check_data("CPU0->I2C", rdata, 32'hA5000202);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU0->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_2;

    fork : txn_3
      begin
        $display("Running CPU0->PWM @ 0x00005000");
        u_cpu0_bfm.write(32'h00005000, 32'hA5000303);
        u_cpu0_bfm.read(32'h00005000, rdata);
        check_data("CPU0->PWM", rdata, 32'hA5000303);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU0->PWM transaction");
        error_count++;
      end
    join_any
    disable txn_3;

    fork : txn_4
      begin
        $display("Running CPU1->UART @ 0x00000000");
        u_cpu1_bfm.write(32'h00000000, 32'hA5000404);
        u_cpu1_bfm.read(32'h00000000, rdata);
        check_data("CPU1->UART", rdata, 32'hA5000404);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU1->UART transaction");
        error_count++;
      end
    join_any
    disable txn_4;

    fork : txn_5
      begin
        $display("Running CPU1->I2C @ 0x00002000");
        u_cpu1_bfm.write(32'h00002000, 32'hA5000505);
        u_cpu1_bfm.read(32'h00002000, rdata);
        check_data("CPU1->I2C", rdata, 32'hA5000505);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU1->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_5;

    fork : txn_6
      begin
        $display("Running CPU1->CAN @ 0x00004000");
        u_cpu1_bfm.write(32'h00004000, 32'hA5000606);
        u_cpu1_bfm.read(32'h00004000, rdata);
        check_data("CPU1->CAN", rdata, 32'hA5000606);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in CPU1->CAN transaction");
        error_count++;
      end
    join_any
    disable txn_6;

    fork : txn_7
      begin
        $display("Running GPU->I2C @ 0x00001000");
        u_gpu_bfm.write(32'h00001000, 32'hA5000707);
        u_gpu_bfm.read(32'h00001000, rdata);
        check_data("GPU->I2C", rdata, 32'hA5000707);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in GPU->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_7;

    fork : txn_8
      begin
        $display("Running GPU->SPI @ 0x00000000");
        u_gpu_bfm.write(32'h00000000, 32'hA5000808);
        u_gpu_bfm.read(32'h00000000, rdata);
        check_data("GPU->SPI", rdata, 32'hA5000808);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in GPU->SPI transaction");
        error_count++;
      end
    join_any
    disable txn_8;

    fork : txn_9
      begin
        $display("Running GPU->PCIE @ 0x00002000");
        u_gpu_bfm.write(32'h00002000, 32'hA5000909);
        u_gpu_bfm.read(32'h00002000, rdata);
        check_data("GPU->PCIE", rdata, 32'hA5000909);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in GPU->PCIE transaction");
        error_count++;
      end
    join_any
    disable txn_9;

    fork : txn_10
      begin
        $display("Running NPU->I2C @ 0x00000000");
        u_npu_bfm.write(32'h00000000, 32'hA5000A0A);
        u_npu_bfm.read(32'h00000000, rdata);
        check_data("NPU->I2C", rdata, 32'hA5000A0A);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in NPU->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_10;

    fork : txn_11
      begin
        $display("Running TPU->I2C @ 0x00001000");
        u_tpu_bfm.write(32'h00001000, 32'hA5000B0B);
        u_tpu_bfm.read(32'h00001000, rdata);
        check_data("TPU->I2C", rdata, 32'hA5000B0B);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in TPU->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_11;

    fork : txn_12
      begin
        $display("Running PPU->I2C @ 0x00002000");
        u_ppu_bfm.write(32'h00002000, 32'hA5000C0C);
        u_ppu_bfm.read(32'h00002000, rdata);
        check_data("PPU->I2C", rdata, 32'hA5000C0C);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in PPU->I2C transaction");
        error_count++;
      end
    join_any
    disable txn_12;

    fork : txn_13
      begin
        $display("Running contention UART: CPU0@0x00000000 || CPU1@0x00000004");
        fork
          begin u_cpu0_bfm.write(32'h00000000, 32'hB1000D11); end
          begin u_cpu1_bfm.write(32'h00000004, 32'hB2000D22); end
        join
        u_cpu0_bfm.read(32'h00000000, rdata);
        check_data("ARB-UART-CPU0", rdata, 32'hB1000D11);
        u_cpu1_bfm.read(32'h00000004, rdata);
        check_data("ARB-UART-CPU1", rdata, 32'hB2000D22);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in contention UART transaction");
        error_count++;
      end
    join_any
    disable txn_13;

    fork : txn_14
      begin
        $display("Running intensive contention stress on UART (2 contenders)");
        fork
          begin u_cpu0_bfm.write(32'h00000000, 32'hC5000E00); end
          begin u_cpu1_bfm.write(32'h00000004, 32'hC5000E00); end
        join
        u_cpu0_bfm.read(32'h00000000, rdata);
        check_data("STR-UART-CPU0-0", rdata, 32'hC5000E00);
        u_cpu1_bfm.read(32'h00000004, rdata);
        check_data("STR-UART-CPU1-0", rdata, 32'hC5000E00);
        fork
          begin u_cpu0_bfm.write(32'h0000000C, 32'hC5000F01); end
          begin u_cpu1_bfm.write(32'h00000010, 32'hC5000F01); end
        join
        u_cpu0_bfm.read(32'h0000000C, rdata);
        check_data("STR-UART-CPU0-1", rdata, 32'hC5000F01);
        u_cpu1_bfm.read(32'h00000010, rdata);
        check_data("STR-UART-CPU1-1", rdata, 32'hC5000F01);
        fork
          begin u_cpu0_bfm.write(32'h00000018, 32'hC5001002); end
          begin u_cpu1_bfm.write(32'h0000001C, 32'hC5001002); end
        join
        u_cpu0_bfm.read(32'h00000018, rdata);
        check_data("STR-UART-CPU0-2", rdata, 32'hC5001002);
        u_cpu1_bfm.read(32'h0000001C, rdata);
        check_data("STR-UART-CPU1-2", rdata, 32'hC5001002);
        fork
          begin u_cpu0_bfm.write(32'h00000024, 32'hC5001103); end
          begin u_cpu1_bfm.write(32'h00000028, 32'hC5001103); end
        join
        u_cpu0_bfm.read(32'h00000024, rdata);
        check_data("STR-UART-CPU0-3", rdata, 32'hC5001103);
        u_cpu1_bfm.read(32'h00000028, rdata);
        check_data("STR-UART-CPU1-3", rdata, 32'hC5001103);
        fork
          begin u_cpu0_bfm.write(32'h00000030, 32'hC5001204); end
          begin u_cpu1_bfm.write(32'h00000034, 32'hC5001204); end
        join
        u_cpu0_bfm.read(32'h00000030, rdata);
        check_data("STR-UART-CPU0-4", rdata, 32'hC5001204);
        u_cpu1_bfm.read(32'h00000034, rdata);
        check_data("STR-UART-CPU1-4", rdata, 32'hC5001204);
        fork
          begin u_cpu0_bfm.write(32'h0000003C, 32'hC5001305); end
          begin u_cpu1_bfm.write(32'h00000040, 32'hC5001305); end
        join
        u_cpu0_bfm.read(32'h0000003C, rdata);
        check_data("STR-UART-CPU0-5", rdata, 32'hC5001305);
        u_cpu1_bfm.read(32'h00000040, rdata);
        check_data("STR-UART-CPU1-5", rdata, 32'hC5001305);
        fork
          begin u_cpu0_bfm.write(32'h00000048, 32'hC5001406); end
          begin u_cpu1_bfm.write(32'h0000004C, 32'hC5001406); end
        join
        u_cpu0_bfm.read(32'h00000048, rdata);
        check_data("STR-UART-CPU0-6", rdata, 32'hC5001406);
        u_cpu1_bfm.read(32'h0000004C, rdata);
        check_data("STR-UART-CPU1-6", rdata, 32'hC5001406);
        fork
          begin u_cpu0_bfm.write(32'h00000054, 32'hC5001507); end
          begin u_cpu1_bfm.write(32'h00000058, 32'hC5001507); end
        join
        u_cpu0_bfm.read(32'h00000054, rdata);
        check_data("STR-UART-CPU0-7", rdata, 32'hC5001507);
        u_cpu1_bfm.read(32'h00000058, rdata);
        check_data("STR-UART-CPU1-7", rdata, 32'hC5001507);
      end
      begin
        repeat (50000) @(posedge clk);
        $display("[FAIL] TIMEOUT in intensive contention UART transaction");
        error_count++;
      end
    join_any
    disable txn_14;

    fork : txn_15
      begin
        time rr_done_t_uart [0:1][0:7];
        bit  rr_used_uart [0:1][0:7];
        int  rr_order_uart [0:15];
        int rr_i;
        int rr_j;
        int rr_k;
        int rr_r;
        int rr_pos;
        int rr_min_m;
        int rr_min_r;
        int rr_exp;
        time rr_min_t;
        $display("Running all-at-once RR check on UART (2 contenders, 4 rounds, immediate re-request)");
        for (rr_i = 0; rr_i < 2; rr_i++) begin
          for (rr_k = 0; rr_k < 8; rr_k++) begin
            rr_done_t_uart[rr_i][rr_k] = 0;
            rr_used_uart[rr_i][rr_k] = 1'b0;
          end
        end
        for (rr_pos = 0; rr_pos < 16; rr_pos++) begin
          rr_order_uart[rr_pos] = -1;
        end
        fork
          begin
            int rr_k_cpu0;
            int rr_wop_cpu0;
            int rr_rop_cpu0;
            logic [31:0] rr_rd_cpu0;
            for (rr_k_cpu0 = 0; rr_k_cpu0 < 4; rr_k_cpu0++) begin
              rr_wop_cpu0 = rr_k_cpu0 * 2;
              rr_rop_cpu0 = rr_wop_cpu0 + 1;
              u_cpu0_bfm.write(32'h00000000, (32'hD5000F00 + rr_k_cpu0));
              rr_done_t_uart[0][rr_wop_cpu0] = $time;
              u_cpu0_bfm.read(32'h00000000, rr_rd_cpu0);
              check_data($sformatf("RRRW-UART-CPU0-%0d", rr_k_cpu0), rr_rd_cpu0, (32'hD5000F00 + rr_k_cpu0));
              rr_done_t_uart[0][rr_rop_cpu0] = $time;
            end
          end
          begin
            int rr_k_cpu1;
            int rr_wop_cpu1;
            int rr_rop_cpu1;
            logic [31:0] rr_rd_cpu1;
            for (rr_k_cpu1 = 0; rr_k_cpu1 < 4; rr_k_cpu1++) begin
              rr_wop_cpu1 = rr_k_cpu1 * 2;
              rr_rop_cpu1 = rr_wop_cpu1 + 1;
              u_cpu1_bfm.write(32'h00000004, (32'hD5000F00 + rr_k_cpu1));
              rr_done_t_uart[1][rr_wop_cpu1] = $time;
              u_cpu1_bfm.read(32'h00000004, rr_rd_cpu1);
              check_data($sformatf("RRRW-UART-CPU1-%0d", rr_k_cpu1), rr_rd_cpu1, (32'hD5000F00 + rr_k_cpu1));
              rr_done_t_uart[1][rr_rop_cpu1] = $time;
            end
          end
        join
        for (rr_pos = 0; rr_pos < 16; rr_pos++) begin
          rr_min_t = 64'h7FFF_FFFF_FFFF_FFFF;
          rr_min_m = -1;
          rr_min_r = -1;
          for (rr_j = 0; rr_j < 2; rr_j++) begin
            for (rr_r = 0; rr_r < 8; rr_r++) begin
              if (!rr_used_uart[rr_j][rr_r] && (rr_done_t_uart[rr_j][rr_r] < rr_min_t)) begin
                rr_min_t = rr_done_t_uart[rr_j][rr_r];
                rr_min_m = rr_j;
                rr_min_r = rr_r;
              end
            end
          end
          if (rr_min_m < 0) begin
            $display("[FAIL] RR sort failure on UART @%0t", $time);
            error_count++;
          end else begin
            rr_order_uart[rr_pos] = rr_min_m;
            rr_used_uart[rr_min_m][rr_min_r] = 1'b1;
          end
        end
        for (rr_pos = 1; rr_pos < 16; rr_pos++) begin
          rr_exp = (rr_order_uart[rr_pos-1] + 1) % 2;
          if (rr_order_uart[rr_pos] !== rr_exp) begin
            $display("[FAIL] RR order violation on UART at step %0d: got=%0d exp=%0d @%0t", rr_pos, rr_order_uart[rr_pos], rr_exp, $time);
            error_count++;
          end
        end
      end
      begin
        repeat (50000) @(posedge clk);
        $display("[FAIL] TIMEOUT in all-at-once RR UART transaction");
        error_count++;
      end
    join_any
    disable txn_15;

    fork : txn_16
      begin
        $display("Running contention I2C: CPU0@0x00010000 || CPU1@0x00002004");
        fork
          begin u_cpu0_bfm.write(32'h00010000, 32'hB1001011); end
          begin u_cpu1_bfm.write(32'h00002004, 32'hB2001022); end
        join
        u_cpu0_bfm.read(32'h00010000, rdata);
        check_data("ARB-I2C-CPU0", rdata, 32'hB1001011);
        u_cpu1_bfm.read(32'h00002004, rdata);
        check_data("ARB-I2C-CPU1", rdata, 32'hB2001022);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in contention I2C transaction");
        error_count++;
      end
    join_any
    disable txn_16;

    fork : txn_17
      begin
        $display("Running intensive contention stress on I2C (6 contenders)");
        fork
          begin u_cpu0_bfm.write(32'h00010000, 32'hC5001100); end
          begin u_cpu1_bfm.write(32'h00002004, 32'hC5001100); end
          begin u_gpu_bfm.write(32'h00001008, 32'hC5001100); end
          begin u_npu_bfm.write(32'h0000000C, 32'hC5001100); end
          begin u_tpu_bfm.write(32'h00001000, 32'hC5001100); end
          begin u_ppu_bfm.write(32'h00002004, 32'hC5001100); end
        join
        u_cpu0_bfm.read(32'h00010000, rdata);
        check_data("STR-I2C-CPU0-0", rdata, 32'hC5001100);
        u_cpu1_bfm.read(32'h00002004, rdata);
        check_data("STR-I2C-CPU1-0", rdata, 32'hC5001100);
        u_gpu_bfm.read(32'h00001008, rdata);
        check_data("STR-I2C-GPU-0", rdata, 32'hC5001100);
        u_npu_bfm.read(32'h0000000C, rdata);
        check_data("STR-I2C-NPU-0", rdata, 32'hC5001100);
        u_tpu_bfm.read(32'h00001000, rdata);
        check_data("STR-I2C-TPU-0", rdata, 32'hC5001100);
        u_ppu_bfm.read(32'h00002004, rdata);
        check_data("STR-I2C-PPU-0", rdata, 32'hC5001100);
        fork
          begin u_cpu0_bfm.write(32'h0001000C, 32'hC5001201); end
          begin u_cpu1_bfm.write(32'h00002000, 32'hC5001201); end
          begin u_gpu_bfm.write(32'h00001004, 32'hC5001201); end
          begin u_npu_bfm.write(32'h00000008, 32'hC5001201); end
          begin u_tpu_bfm.write(32'h0000100C, 32'hC5001201); end
          begin u_ppu_bfm.write(32'h00002000, 32'hC5001201); end
        join
        u_cpu0_bfm.read(32'h0001000C, rdata);
        check_data("STR-I2C-CPU0-1", rdata, 32'hC5001201);
        u_cpu1_bfm.read(32'h00002000, rdata);
        check_data("STR-I2C-CPU1-1", rdata, 32'hC5001201);
        u_gpu_bfm.read(32'h00001004, rdata);
        check_data("STR-I2C-GPU-1", rdata, 32'hC5001201);
        u_npu_bfm.read(32'h00000008, rdata);
        check_data("STR-I2C-NPU-1", rdata, 32'hC5001201);
        u_tpu_bfm.read(32'h0000100C, rdata);
        check_data("STR-I2C-TPU-1", rdata, 32'hC5001201);
        u_ppu_bfm.read(32'h00002000, rdata);
        check_data("STR-I2C-PPU-1", rdata, 32'hC5001201);
        fork
          begin u_cpu0_bfm.write(32'h00010008, 32'hC5001302); end
          begin u_cpu1_bfm.write(32'h0000200C, 32'hC5001302); end
          begin u_gpu_bfm.write(32'h00001000, 32'hC5001302); end
          begin u_npu_bfm.write(32'h00000004, 32'hC5001302); end
          begin u_tpu_bfm.write(32'h00001008, 32'hC5001302); end
          begin u_ppu_bfm.write(32'h0000200C, 32'hC5001302); end
        join
        u_cpu0_bfm.read(32'h00010008, rdata);
        check_data("STR-I2C-CPU0-2", rdata, 32'hC5001302);
        u_cpu1_bfm.read(32'h0000200C, rdata);
        check_data("STR-I2C-CPU1-2", rdata, 32'hC5001302);
        u_gpu_bfm.read(32'h00001000, rdata);
        check_data("STR-I2C-GPU-2", rdata, 32'hC5001302);
        u_npu_bfm.read(32'h00000004, rdata);
        check_data("STR-I2C-NPU-2", rdata, 32'hC5001302);
        u_tpu_bfm.read(32'h00001008, rdata);
        check_data("STR-I2C-TPU-2", rdata, 32'hC5001302);
        u_ppu_bfm.read(32'h0000200C, rdata);
        check_data("STR-I2C-PPU-2", rdata, 32'hC5001302);
        fork
          begin u_cpu0_bfm.write(32'h00010004, 32'hC5001403); end
          begin u_cpu1_bfm.write(32'h00002008, 32'hC5001403); end
          begin u_gpu_bfm.write(32'h0000100C, 32'hC5001403); end
          begin u_npu_bfm.write(32'h00000000, 32'hC5001403); end
          begin u_tpu_bfm.write(32'h00001004, 32'hC5001403); end
          begin u_ppu_bfm.write(32'h00002008, 32'hC5001403); end
        join
        u_cpu0_bfm.read(32'h00010004, rdata);
        check_data("STR-I2C-CPU0-3", rdata, 32'hC5001403);
        u_cpu1_bfm.read(32'h00002008, rdata);
        check_data("STR-I2C-CPU1-3", rdata, 32'hC5001403);
        u_gpu_bfm.read(32'h0000100C, rdata);
        check_data("STR-I2C-GPU-3", rdata, 32'hC5001403);
        u_npu_bfm.read(32'h00000000, rdata);
        check_data("STR-I2C-NPU-3", rdata, 32'hC5001403);
        u_tpu_bfm.read(32'h00001004, rdata);
        check_data("STR-I2C-TPU-3", rdata, 32'hC5001403);
        u_ppu_bfm.read(32'h00002008, rdata);
        check_data("STR-I2C-PPU-3", rdata, 32'hC5001403);
        fork
          begin u_cpu0_bfm.write(32'h00010000, 32'hC5001504); end
          begin u_cpu1_bfm.write(32'h00002004, 32'hC5001504); end
          begin u_gpu_bfm.write(32'h00001008, 32'hC5001504); end
          begin u_npu_bfm.write(32'h0000000C, 32'hC5001504); end
          begin u_tpu_bfm.write(32'h00001000, 32'hC5001504); end
          begin u_ppu_bfm.write(32'h00002004, 32'hC5001504); end
        join
        u_cpu0_bfm.read(32'h00010000, rdata);
        check_data("STR-I2C-CPU0-4", rdata, 32'hC5001504);
        u_cpu1_bfm.read(32'h00002004, rdata);
        check_data("STR-I2C-CPU1-4", rdata, 32'hC5001504);
        u_gpu_bfm.read(32'h00001008, rdata);
        check_data("STR-I2C-GPU-4", rdata, 32'hC5001504);
        u_npu_bfm.read(32'h0000000C, rdata);
        check_data("STR-I2C-NPU-4", rdata, 32'hC5001504);
        u_tpu_bfm.read(32'h00001000, rdata);
        check_data("STR-I2C-TPU-4", rdata, 32'hC5001504);
        u_ppu_bfm.read(32'h00002004, rdata);
        check_data("STR-I2C-PPU-4", rdata, 32'hC5001504);
        fork
          begin u_cpu0_bfm.write(32'h0001000C, 32'hC5001605); end
          begin u_cpu1_bfm.write(32'h00002000, 32'hC5001605); end
          begin u_gpu_bfm.write(32'h00001004, 32'hC5001605); end
          begin u_npu_bfm.write(32'h00000008, 32'hC5001605); end
          begin u_tpu_bfm.write(32'h0000100C, 32'hC5001605); end
          begin u_ppu_bfm.write(32'h00002000, 32'hC5001605); end
        join
        u_cpu0_bfm.read(32'h0001000C, rdata);
        check_data("STR-I2C-CPU0-5", rdata, 32'hC5001605);
        u_cpu1_bfm.read(32'h00002000, rdata);
        check_data("STR-I2C-CPU1-5", rdata, 32'hC5001605);
        u_gpu_bfm.read(32'h00001004, rdata);
        check_data("STR-I2C-GPU-5", rdata, 32'hC5001605);
        u_npu_bfm.read(32'h00000008, rdata);
        check_data("STR-I2C-NPU-5", rdata, 32'hC5001605);
        u_tpu_bfm.read(32'h0000100C, rdata);
        check_data("STR-I2C-TPU-5", rdata, 32'hC5001605);
        u_ppu_bfm.read(32'h00002000, rdata);
        check_data("STR-I2C-PPU-5", rdata, 32'hC5001605);
        fork
          begin u_cpu0_bfm.write(32'h00010008, 32'hC5001706); end
          begin u_cpu1_bfm.write(32'h0000200C, 32'hC5001706); end
          begin u_gpu_bfm.write(32'h00001000, 32'hC5001706); end
          begin u_npu_bfm.write(32'h00000004, 32'hC5001706); end
          begin u_tpu_bfm.write(32'h00001008, 32'hC5001706); end
          begin u_ppu_bfm.write(32'h0000200C, 32'hC5001706); end
        join
        u_cpu0_bfm.read(32'h00010008, rdata);
        check_data("STR-I2C-CPU0-6", rdata, 32'hC5001706);
        u_cpu1_bfm.read(32'h0000200C, rdata);
        check_data("STR-I2C-CPU1-6", rdata, 32'hC5001706);
        u_gpu_bfm.read(32'h00001000, rdata);
        check_data("STR-I2C-GPU-6", rdata, 32'hC5001706);
        u_npu_bfm.read(32'h00000004, rdata);
        check_data("STR-I2C-NPU-6", rdata, 32'hC5001706);
        u_tpu_bfm.read(32'h00001008, rdata);
        check_data("STR-I2C-TPU-6", rdata, 32'hC5001706);
        u_ppu_bfm.read(32'h0000200C, rdata);
        check_data("STR-I2C-PPU-6", rdata, 32'hC5001706);
        fork
          begin u_cpu0_bfm.write(32'h00010004, 32'hC5001807); end
          begin u_cpu1_bfm.write(32'h00002008, 32'hC5001807); end
          begin u_gpu_bfm.write(32'h0000100C, 32'hC5001807); end
          begin u_npu_bfm.write(32'h00000000, 32'hC5001807); end
          begin u_tpu_bfm.write(32'h00001004, 32'hC5001807); end
          begin u_ppu_bfm.write(32'h00002008, 32'hC5001807); end
        join
        u_cpu0_bfm.read(32'h00010004, rdata);
        check_data("STR-I2C-CPU0-7", rdata, 32'hC5001807);
        u_cpu1_bfm.read(32'h00002008, rdata);
        check_data("STR-I2C-CPU1-7", rdata, 32'hC5001807);
        u_gpu_bfm.read(32'h0000100C, rdata);
        check_data("STR-I2C-GPU-7", rdata, 32'hC5001807);
        u_npu_bfm.read(32'h00000000, rdata);
        check_data("STR-I2C-NPU-7", rdata, 32'hC5001807);
        u_tpu_bfm.read(32'h00001004, rdata);
        check_data("STR-I2C-TPU-7", rdata, 32'hC5001807);
        u_ppu_bfm.read(32'h00002008, rdata);
        check_data("STR-I2C-PPU-7", rdata, 32'hC5001807);
      end
      begin
        repeat (50000) @(posedge clk);
        $display("[FAIL] TIMEOUT in intensive contention I2C transaction");
        error_count++;
      end
    join_any
    disable txn_17;

    fork : txn_18
      begin
        time rr_done_t_i2c [0:5][0:7];
        bit  rr_used_i2c [0:5][0:7];
        int  rr_order_i2c [0:47];
        int rr_i;
        int rr_j;
        int rr_k;
        int rr_r;
        int rr_pos;
        int rr_min_m;
        int rr_min_r;
        int rr_exp;
        time rr_min_t;
        $display("Running all-at-once RR check on I2C (6 contenders, 4 rounds, immediate re-request)");
        for (rr_i = 0; rr_i < 6; rr_i++) begin
          for (rr_k = 0; rr_k < 8; rr_k++) begin
            rr_done_t_i2c[rr_i][rr_k] = 0;
            rr_used_i2c[rr_i][rr_k] = 1'b0;
          end
        end
        for (rr_pos = 0; rr_pos < 48; rr_pos++) begin
          rr_order_i2c[rr_pos] = -1;
        end
        fork
          begin
            int rr_k_cpu0;
            int rr_wop_cpu0;
            int rr_rop_cpu0;
            logic [31:0] rr_rd_cpu0;
            for (rr_k_cpu0 = 0; rr_k_cpu0 < 4; rr_k_cpu0++) begin
              rr_wop_cpu0 = rr_k_cpu0 * 2;
              rr_rop_cpu0 = rr_wop_cpu0 + 1;
              u_cpu0_bfm.write(32'h00010000, (32'hD5001200 + rr_k_cpu0));
              rr_done_t_i2c[0][rr_wop_cpu0] = $time;
              u_cpu0_bfm.read(32'h00010000, rr_rd_cpu0);
              check_data($sformatf("RRRW-I2C-CPU0-%0d", rr_k_cpu0), rr_rd_cpu0, (32'hD5001200 + rr_k_cpu0));
              rr_done_t_i2c[0][rr_rop_cpu0] = $time;
            end
          end
          begin
            int rr_k_cpu1;
            int rr_wop_cpu1;
            int rr_rop_cpu1;
            logic [31:0] rr_rd_cpu1;
            for (rr_k_cpu1 = 0; rr_k_cpu1 < 4; rr_k_cpu1++) begin
              rr_wop_cpu1 = rr_k_cpu1 * 2;
              rr_rop_cpu1 = rr_wop_cpu1 + 1;
              u_cpu1_bfm.write(32'h00002004, (32'hD5001200 + rr_k_cpu1));
              rr_done_t_i2c[1][rr_wop_cpu1] = $time;
              u_cpu1_bfm.read(32'h00002004, rr_rd_cpu1);
              check_data($sformatf("RRRW-I2C-CPU1-%0d", rr_k_cpu1), rr_rd_cpu1, (32'hD5001200 + rr_k_cpu1));
              rr_done_t_i2c[1][rr_rop_cpu1] = $time;
            end
          end
          begin
            int rr_k_gpu;
            int rr_wop_gpu;
            int rr_rop_gpu;
            logic [31:0] rr_rd_gpu;
            for (rr_k_gpu = 0; rr_k_gpu < 4; rr_k_gpu++) begin
              rr_wop_gpu = rr_k_gpu * 2;
              rr_rop_gpu = rr_wop_gpu + 1;
              u_gpu_bfm.write(32'h00001008, (32'hD5001200 + rr_k_gpu));
              rr_done_t_i2c[2][rr_wop_gpu] = $time;
              u_gpu_bfm.read(32'h00001008, rr_rd_gpu);
              check_data($sformatf("RRRW-I2C-GPU-%0d", rr_k_gpu), rr_rd_gpu, (32'hD5001200 + rr_k_gpu));
              rr_done_t_i2c[2][rr_rop_gpu] = $time;
            end
          end
          begin
            int rr_k_npu;
            int rr_wop_npu;
            int rr_rop_npu;
            logic [31:0] rr_rd_npu;
            for (rr_k_npu = 0; rr_k_npu < 4; rr_k_npu++) begin
              rr_wop_npu = rr_k_npu * 2;
              rr_rop_npu = rr_wop_npu + 1;
              u_npu_bfm.write(32'h0000000C, (32'hD5001200 + rr_k_npu));
              rr_done_t_i2c[3][rr_wop_npu] = $time;
              u_npu_bfm.read(32'h0000000C, rr_rd_npu);
              check_data($sformatf("RRRW-I2C-NPU-%0d", rr_k_npu), rr_rd_npu, (32'hD5001200 + rr_k_npu));
              rr_done_t_i2c[3][rr_rop_npu] = $time;
            end
          end
          begin
            int rr_k_tpu;
            int rr_wop_tpu;
            int rr_rop_tpu;
            logic [31:0] rr_rd_tpu;
            for (rr_k_tpu = 0; rr_k_tpu < 4; rr_k_tpu++) begin
              rr_wop_tpu = rr_k_tpu * 2;
              rr_rop_tpu = rr_wop_tpu + 1;
              u_tpu_bfm.write(32'h00001000, (32'hD5001200 + rr_k_tpu));
              rr_done_t_i2c[4][rr_wop_tpu] = $time;
              u_tpu_bfm.read(32'h00001000, rr_rd_tpu);
              check_data($sformatf("RRRW-I2C-TPU-%0d", rr_k_tpu), rr_rd_tpu, (32'hD5001200 + rr_k_tpu));
              rr_done_t_i2c[4][rr_rop_tpu] = $time;
            end
          end
          begin
            int rr_k_ppu;
            int rr_wop_ppu;
            int rr_rop_ppu;
            logic [31:0] rr_rd_ppu;
            for (rr_k_ppu = 0; rr_k_ppu < 4; rr_k_ppu++) begin
              rr_wop_ppu = rr_k_ppu * 2;
              rr_rop_ppu = rr_wop_ppu + 1;
              u_ppu_bfm.write(32'h00002004, (32'hD5001200 + rr_k_ppu));
              rr_done_t_i2c[5][rr_wop_ppu] = $time;
              u_ppu_bfm.read(32'h00002004, rr_rd_ppu);
              check_data($sformatf("RRRW-I2C-PPU-%0d", rr_k_ppu), rr_rd_ppu, (32'hD5001200 + rr_k_ppu));
              rr_done_t_i2c[5][rr_rop_ppu] = $time;
            end
          end
        join
        for (rr_pos = 0; rr_pos < 48; rr_pos++) begin
          rr_min_t = 64'h7FFF_FFFF_FFFF_FFFF;
          rr_min_m = -1;
          rr_min_r = -1;
          for (rr_j = 0; rr_j < 6; rr_j++) begin
            for (rr_r = 0; rr_r < 8; rr_r++) begin
              if (!rr_used_i2c[rr_j][rr_r] && (rr_done_t_i2c[rr_j][rr_r] < rr_min_t)) begin
                rr_min_t = rr_done_t_i2c[rr_j][rr_r];
                rr_min_m = rr_j;
                rr_min_r = rr_r;
              end
            end
          end
          if (rr_min_m < 0) begin
            $display("[FAIL] RR sort failure on I2C @%0t", $time);
            error_count++;
          end else begin
            rr_order_i2c[rr_pos] = rr_min_m;
            rr_used_i2c[rr_min_m][rr_min_r] = 1'b1;
          end
        end
        for (rr_pos = 1; rr_pos < 48; rr_pos++) begin
          rr_exp = (rr_order_i2c[rr_pos-1] + 1) % 6;
          if (rr_order_i2c[rr_pos] !== rr_exp) begin
            $display("[FAIL] RR order violation on I2C at step %0d: got=%0d exp=%0d @%0t", rr_pos, rr_order_i2c[rr_pos], rr_exp, $time);
            error_count++;
          end
        end
      end
      begin
        repeat (50000) @(posedge clk);
        $display("[FAIL] TIMEOUT in all-at-once RR I2C transaction");
        error_count++;
      end
    join_any
    disable txn_18;

    fork : txn_19
      begin
        $display("Running 3-way contention I2C: CPU0 || CPU1 || GPU");
        fork
          begin u_cpu0_bfm.write(32'h00010000, 32'hB1001011); end
          begin u_cpu1_bfm.write(32'h00002004, 32'hB2001322); end
          begin u_gpu_bfm.write(32'h00001008, 32'hB3001333); end
        join
        u_cpu0_bfm.read(32'h00010000, rdata);
        check_data("ARB3-I2C-CPU0", rdata, 32'hB1001011);
        u_cpu1_bfm.read(32'h00002004, rdata);
        check_data("ARB3-I2C-CPU1", rdata, 32'hB2001322);
        u_gpu_bfm.read(32'h00001008, rdata);
        check_data("ARB3-I2C-GPU", rdata, 32'hB3001333);
      end
      begin
        repeat (5000) @(posedge clk);
        $display("[FAIL] TIMEOUT in 3-way contention I2C transaction");
        error_count++;
      end
    join_any
    disable txn_19;

    repeat (10) @(posedge clk);
    if (error_count == 0) begin
      $display("TEST PASS");
      $finish;
    end else begin
      $display("TEST FAIL. errors=%0d", error_count);
      $fatal(1);
    end
  end

  initial begin
    #200000;
    $fatal(1, "TIMEOUT");
  end
endmodule
