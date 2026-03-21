# Lint Waiver for m_vlsi_arbiter_pwm
# Waive W240 (Input declared but not read) for i_clk and i_rstn
# These ports are kept for interface consistency with multi-master arbiters

waive_lint -add "W240 for m_vlsi_arbiter_pwm i_clk and i_rstn" -tag W240 -filter {Module == m_vlsi_arbiter_pwm}
