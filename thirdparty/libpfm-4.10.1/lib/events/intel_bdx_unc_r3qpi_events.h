/*
 * Copyright (c) 2017 Google Inc. All rights reserved
 * Contributed by Stephane Eranian <eranian@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 *
 * PMU: bdx_unc_r3qpi
 */

static intel_x86_umask_t bdx_unc_r3_c_hi_ad_credits_empty[]={
	{ .uname = "CBO10",
	  .ucode = 0x400,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO11",
	  .ucode = 0x800,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO12",
	  .ucode = 0x1000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO13",
	  .ucode = 0x2000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO14_16",
	  .ucode = 0x4000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO8",
	  .ucode = 0x100,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO9",
	  .ucode = 0x200,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO_15_17",
	  .ucode = 0x8000,
	  .udesc = "CBox AD Credits Empty",
	},
};

static intel_x86_umask_t bdx_unc_r3_c_lo_ad_credits_empty[]={
	{ .uname = "CBO0",
	  .ucode = 0x100,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO1",
	  .ucode = 0x200,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO2",
	  .ucode = 0x400,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO3",
	  .ucode = 0x800,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO4",
	  .ucode = 0x1000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO5",
	  .ucode = 0x2000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO6",
	  .ucode = 0x4000,
	  .udesc = "CBox AD Credits Empty",
	},
	{ .uname = "CBO7",
	  .ucode = 0x8000,
	  .udesc = "CBox AD Credits Empty",
	},
};

static intel_x86_umask_t bdx_unc_r3_ha_r2_bl_credits_empty[]={
	{ .uname = "HA0",
	  .ucode = 0x100,
	  .udesc = "HA/R2 AD Credits Empty",
	},
	{ .uname = "HA1",
	  .ucode = 0x200,
	  .udesc = "HA/R2 AD Credits Empty",
	},
	{ .uname = "R2_NCB",
	  .ucode = 0x400,
	  .udesc = "HA/R2 AD Credits Empty",
	},
	{ .uname = "R2_NCS",
	  .ucode = 0x800,
	  .udesc = "HA/R2 AD Credits Empty",
	},
};

static intel_x86_umask_t bdx_unc_r3_qpi0_ad_credits_empty[]={
	{ .uname = "VN0_HOM",
	  .ucode = 0x200,
	  .udesc = "VN0 HOM messages",
	},
	{ .uname = "VN0_NDR",
	  .ucode = 0x800,
	  .udesc = "VN0 NDR messages",
	},
	{ .uname = "VN0_SNP",
	  .ucode = 0x400,
	  .udesc = "VN0 SNP messages",
	},
	{ .uname = "VN1_HOM",
	  .ucode = 0x1000,
	  .udesc = "VN1 HOM messages",
	},
	{ .uname = "VN1_NDR",
	  .ucode = 0x4000,
	  .udesc = "VN1 NDR messages",
	},
	{ .uname = "VN1_SNP",
	  .ucode = 0x2000,
	  .udesc = "VN1 SNP messages",
	},
	{ .uname = "VNA",
	  .ucode = 0x100,
	  .udesc = "VNA messages",
	},
};

static intel_x86_umask_t bdx_unc_r3_qpi0_bl_credits_empty[]={
	{ .uname = "VN1_HOM",
	  .ucode = 0x1000,
	  .udesc = "QPIx BL Credits Empty",
	},
	{ .uname = "VN1_NDR",
	  .ucode = 0x4000,
	  .udesc = "QPIx BL Credits Empty",
	},
	{ .uname = "VN1_SNP",
	  .ucode = 0x2000,
	  .udesc = "QPIx BL Credits Empty",
	},
	{ .uname = "VNA",
	  .ucode = 0x100,
	  .udesc = "QPIx BL Credits Empty",
	},
};

static intel_x86_umask_t bdx_unc_r3_ring_ad_used[]={
	{ .uname  = "CCW",
	  .ucode  = 0xc00,
	  .udesc  = "Counterclockwise",
	  .uflags = INTEL_X86_NCOMBO,
	},
	{ .uname = "CCW_EVEN",
	  .ucode = 0x400,
	  .udesc = "Counterclockwise and Even",
	},
	{ .uname = "CCW_ODD",
	  .ucode = 0x800,
	  .udesc = "Counterclockwise and Odd",
	},
	{ .uname  = "CW",
	  .ucode  = 0x300,
	  .udesc  = "Clockwise",
	  .uflags = INTEL_X86_NCOMBO,
	},
	{ .uname = "CW_EVEN",
	  .ucode = 0x100,
	  .udesc = "Clockwise and Even",
	},
	{ .uname = "CW_ODD",
	  .ucode = 0x200,
	  .udesc = "Clockwise and Odd",
	},
};

static intel_x86_umask_t bdx_unc_r3_ring_iv_used[]={
	{ .uname  = "ANY",
	  .ucode  = 0xf00,
	  .udesc  = "Any",
	  .uflags = INTEL_X86_NCOMBO | INTEL_X86_DFL,
	},
	{ .uname  = "CW",
	  .ucode  = 0x300,
	  .udesc  = "Clockwise",
	  .uflags = INTEL_X86_NCOMBO,
	},
};

static intel_x86_umask_t bdx_unc_r3_ring_sink_starved[]={
	{ .uname  = "AK",
	  .ucode  = 0x200,
	  .udesc  = "AK",
	  .uflags = INTEL_X86_DFL,
	},
};

static intel_x86_umask_t bdx_unc_r3_rxr_cycles_ne[]={
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "Ingress Cycles Not Empty -- HOM",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "Ingress Cycles Not Empty -- NDR",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "Ingress Cycles Not Empty -- SNP",
	},
};

static intel_x86_umask_t bdx_unc_r3_rxr_cycles_ne_vn1[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VN1 Ingress Cycles Not Empty -- DRS",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VN1 Ingress Cycles Not Empty -- HOM",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VN1 Ingress Cycles Not Empty -- NCB",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VN1 Ingress Cycles Not Empty -- NCS",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VN1 Ingress Cycles Not Empty -- NDR",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VN1 Ingress Cycles Not Empty -- SNP",
	},
};

static intel_x86_umask_t bdx_unc_r3_rxr_inserts[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "Ingress Allocations -- DRS",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "Ingress Allocations -- HOM",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "Ingress Allocations -- NCB",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "Ingress Allocations -- NCS",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "Ingress Allocations -- NDR",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "Ingress Allocations -- SNP",
	},
};

static intel_x86_umask_t bdx_unc_r3_sbo0_credits_acquired[]={
	{ .uname = "AD",
	  .ucode = 0x100,
	  .udesc = "SBo0 Credits Acquired -- For AD Ring",
	},
	{ .uname = "BL",
	  .ucode = 0x200,
	  .udesc = "SBo0 Credits Acquired -- For BL Ring",
	},
};

static intel_x86_umask_t bdx_unc_r3_sbo1_credits_acquired[]={
	{ .uname = "AD",
	  .ucode = 0x100,
	  .udesc = "SBo1 Credits Acquired -- For AD Ring",
	},
	{ .uname = "BL",
	  .ucode = 0x200,
	  .udesc = "SBo1 Credits Acquired -- For BL Ring",
	},
};

static intel_x86_umask_t bdx_unc_r3_stall_no_sbo_credit[]={
	{ .uname = "SBO0_AD",
	  .ucode = 0x100,
	  .udesc = "Stall on No Sbo Credits -- For SBo0, AD Ring",
	},
	{ .uname = "SBO0_BL",
	  .ucode = 0x400,
	  .udesc = "Stall on No Sbo Credits -- For SBo0, BL Ring",
	},
	{ .uname = "SBO1_AD",
	  .ucode = 0x200,
	  .udesc = "Stall on No Sbo Credits -- For SBo1, AD Ring",
	},
	{ .uname = "SBO1_BL",
	  .ucode = 0x800,
	  .udesc = "Stall on No Sbo Credits -- For SBo1, BL Ring",
	},
};

static intel_x86_umask_t bdx_unc_r3_txr_nack[]={
	{ .uname = "DN_AD",
	  .ucode = 0x100,
	  .udesc = "Egress CCW NACK -- AD CCW",
	},
	{ .uname = "DN_AK",
	  .ucode = 0x400,
	  .udesc = "Egress CCW NACK -- AK CCW",
	},
	{ .uname = "DN_BL",
	  .ucode = 0x200,
	  .udesc = "Egress CCW NACK -- BL CCW",
	},
	{ .uname = "UP_AD",
	  .ucode = 0x800,
	  .udesc = "Egress CCW NACK -- AK CCW",
	},
	{ .uname = "UP_AK",
	  .ucode = 0x2000,
	  .udesc = "Egress CCW NACK -- BL CW",
	},
	{ .uname = "UP_BL",
	  .ucode = 0x1000,
	  .udesc = "Egress CCW NACK -- BL CCW",
	},
};

static intel_x86_umask_t bdx_unc_r3_vn0_credits_reject[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- DRS Message Class",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- HOM Message Class",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- NCB Message Class",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- NCS Message Class",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- NDR Message Class",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VN0 Credit Acquisition Failed on DRS -- SNP Message Class",
	},
};

static intel_x86_umask_t bdx_unc_r3_vn0_credits_used[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VN0 Credit Used -- DRS Message Class",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VN0 Credit Used -- HOM Message Class",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VN0 Credit Used -- NCB Message Class",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VN0 Credit Used -- NCS Message Class",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VN0 Credit Used -- NDR Message Class",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VN0 Credit Used -- SNP Message Class",
	},
};

static intel_x86_umask_t bdx_unc_r3_vn1_credits_reject[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- DRS Message Class",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- HOM Message Class",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- NCB Message Class",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- NCS Message Class",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- NDR Message Class",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VN1 Credit Acquisition Failed on DRS -- SNP Message Class",
	},
};

static intel_x86_umask_t bdx_unc_r3_vn1_credits_used[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VN1 Credit Used -- DRS Message Class",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VN1 Credit Used -- HOM Message Class",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VN1 Credit Used -- NCB Message Class",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VN1 Credit Used -- NCS Message Class",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VN1 Credit Used -- NDR Message Class",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VN1 Credit Used -- SNP Message Class",
	},
};

static intel_x86_umask_t bdx_unc_r3_vna_credits_acquired[]={
	{ .uname = "AD",
	  .ucode = 0x100,
	  .udesc = "VNA credit Acquisitions -- HOM Message Class",
	},
	{ .uname = "BL",
	  .ucode = 0x400,
	  .udesc = "VNA credit Acquisitions -- HOM Message Class",
	},
};

static intel_x86_umask_t bdx_unc_r3_vna_credits_reject[]={
	{ .uname = "DRS",
	  .ucode = 0x800,
	  .udesc = "VNA Credit Reject -- DRS Message Class",
	},
	{ .uname = "HOM",
	  .ucode = 0x100,
	  .udesc = "VNA Credit Reject -- HOM Message Class",
	},
	{ .uname = "NCB",
	  .ucode = 0x1000,
	  .udesc = "VNA Credit Reject -- NCB Message Class",
	},
	{ .uname = "NCS",
	  .ucode = 0x2000,
	  .udesc = "VNA Credit Reject -- NCS Message Class",
	},
	{ .uname = "NDR",
	  .ucode = 0x400,
	  .udesc = "VNA Credit Reject -- NDR Message Class",
	},
	{ .uname = "SNP",
	  .ucode = 0x200,
	  .udesc = "VNA Credit Reject -- SNP Message Class",
	},
};


static intel_x86_entry_t intel_bdx_unc_r3_pe[]={
  { .name   = "UNC_R3_CLOCKTICKS",
    .code   = 0x1,
    .desc   = "Counts the number of uclks in the QPI uclk domain.  This could be slightly different than the count in the Ubox because of enable/freeze delays.  However, because the QPI Agent is close to the Ubox, they generally should not diverge by more than a handful of cycles.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
  },
  { .name   = "UNC_R3_C_HI_AD_CREDITS_EMPTY",
    .code   = 0x1f,
    .desc   = "No credits available to send to Cbox on the AD Ring (covers higher CBoxes)",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_c_hi_ad_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_c_hi_ad_credits_empty),
  },
  { .name   = "UNC_R3_C_LO_AD_CREDITS_EMPTY",
    .code   = 0x22,
    .desc   = "No credits available to send to Cbox on the AD Ring (covers lower CBoxes)",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_c_lo_ad_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_c_lo_ad_credits_empty),
  },
  { .name   = "UNC_R3_HA_R2_BL_CREDITS_EMPTY",
    .code   = 0x2d,
    .desc   = "No credits available to send to either HA or R2 on the BL Ring",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ha_r2_bl_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ha_r2_bl_credits_empty),
  },
  { .name   = "UNC_R3_QPI0_AD_CREDITS_EMPTY",
    .code   = 0x20,
    .desc   = "No credits available to send to QPI0 on the AD Ring",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_qpi0_ad_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_qpi0_ad_credits_empty),
  },
  { .name   = "UNC_R3_QPI0_BL_CREDITS_EMPTY",
    .code   = 0x21,
    .desc   = "No credits available to send to QPI0 on the BL Ring",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_qpi0_bl_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_qpi0_bl_credits_empty),
  },
  { .name   = "UNC_R3_QPI1_AD_CREDITS_EMPTY",
    .code   = 0x2e,
    .desc   = "No credits available to send to QPI1 on the AD Ring",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_qpi0_ad_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_qpi0_ad_credits_empty),
  },
  { .name   = "UNC_R3_QPI1_BL_CREDITS_EMPTY",
    .code   = 0x2f,
    .desc   = "No credits available to send to QPI1 on the BL Ring",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_qpi0_ad_credits_empty,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_qpi0_ad_credits_empty),
  },
  { .name   = "UNC_R3_RING_AD_USED",
    .code   = 0x7,
    .desc   = "Counts the number of cycles that the AD ring is being used at this ring stop.  This includes when packets are passing by and when packets are being sunk, but does not include when packets are being sent from the ring stop.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ring_ad_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ring_ad_used),
  },
  { .name   = "UNC_R3_RING_AK_USED",
    .code   = 0x8,
    .desc   = "Counts the number of cycles that the AK ring is being used at this ring stop.  This includes when packets are passing by and when packets are being sunk, but does not include when packets are being sent from the ring stop.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ring_ad_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ring_ad_used),
  },
  { .name   = "UNC_R3_RING_BL_USED",
    .code   = 0x9,
    .desc   = "Counts the number of cycles that the BL ring is being used at this ring stop.  This includes when packets are passing by and when packets are being sunk, but does not include when packets are being sent from the ring stop.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ring_ad_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ring_ad_used),
  },
  { .name   = "UNC_R3_RING_IV_USED",
    .code   = 0xa,
    .desc   = "Counts the number of cycles that the IV ring is being used at this ring stop.  This includes when packets are passing by and when packets are being sent, but does not include when packets are being sunk into the ring stop.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ring_iv_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ring_iv_used),
  },
  { .name   = "UNC_R3_RING_SINK_STARVED",
    .code   = 0xe,
    .desc   = "Number of cycles the ringstop is in starvation (per ring)",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x7,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_ring_sink_starved,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_ring_sink_starved),
  },
  { .name   = "UNC_R3_RXR_CYCLES_NE",
    .code   = 0x10,
    .desc   = "Counts the number of cycles when the QPI Ingress is not empty.  This tracks one of the three rings that are used by the QPI agent.  This can be used in conjunction with the QPI Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_rxr_cycles_ne,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_rxr_cycles_ne),
  },
  { .name   = "UNC_R3_RXR_CYCLES_NE_VN1",
    .code   = 0x14,
    .desc   = "Counts the number of cycles when the QPI VN1  Ingress is not empty.  This tracks one of the three rings that are used by the QPI agent.  This can be used in conjunction with the QPI VN1  Ingress Occupancy Accumulator event in order to calculate average queue occupancy.  Multiple ingress buffers can be tracked at a given time using multiple counters.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_rxr_cycles_ne_vn1,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_rxr_cycles_ne_vn1),
  },
  { .name   = "UNC_R3_RXR_INSERTS",
    .code   = 0x11,
    .desc   = "Counts the number of allocations into the QPI Ingress.  This tracks one of the three rings that are used by the QPI agent.  This can be used in conjunction with the QPI Ingress Occupancy Accumulator event in order to calculate average queue latency.  Multiple ingress buffers can be tracked at a given time using multiple counters.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_rxr_inserts,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_rxr_inserts),
  },
  { .name   = "UNC_R3_RXR_INSERTS_VN1",
    .code   = 0x15,
    .desc   = "Counts the number of allocations into the QPI VN1  Ingress.  This tracks one of the three rings that are used by the QPI agent.  This can be used in conjunction with the QPI VN1  Ingress Occupancy Accumulator event in order to calculate average queue latency.  Multiple ingress buffers can be tracked at a given time using multiple counters.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_rxr_inserts,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_rxr_inserts),
  },
  { .name   = "UNC_R3_RXR_OCCUPANCY_VN1",
    .code   = 0x13,
    .desc   = "Accumulates the occupancy of a given QPI VN1  Ingress queue in each cycles.  This tracks one of the three ring Ingress buffers.  This can be used with the QPI VN1  Ingress Not Empty event to calculate average occupancy or the QPI VN1  Ingress Allocations event in order to calculate average queuing latency.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x1,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_rxr_inserts,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_rxr_inserts),
  },
  { .name   = "UNC_R3_SBO0_CREDITS_ACQUIRED",
    .code   = 0x28,
    .desc   = "Number of Sbo 0 credits acquired in a given cycle, per ring.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_sbo0_credits_acquired,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_sbo0_credits_acquired),
  },
  { .name   = "UNC_R3_SBO1_CREDITS_ACQUIRED",
    .code   = 0x29,
    .desc   = "Number of Sbo 1 credits acquired in a given cycle, per ring.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_sbo1_credits_acquired,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_sbo1_credits_acquired),
  },
  { .name   = "UNC_R3_STALL_NO_SBO_CREDIT",
    .code   = 0x2c,
    .desc   = "Number of cycles Egress is stalled waiting for an Sbo credit to become available.  Per Sbo, per Ring.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_stall_no_sbo_credit,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_stall_no_sbo_credit),
  },
  { .name   = "UNC_R3_TXR_NACK",
    .code   = 0x26,
    .desc   = "TBD",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_txr_nack,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_txr_nack),
  },
  { .name   = "UNC_R3_VN0_CREDITS_REJECT",
    .code   = 0x37,
    .desc   = "Number of times a request failed to acquire a DRS VN0 credit.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This therefore counts the number of times when a request failed to acquire either a VNA or VN0 credit and is delayed.  This should generally be a rare situation.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vn0_credits_reject,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vn0_credits_reject),
  },
  { .name   = "UNC_R3_VN0_CREDITS_USED",
    .code   = 0x36,
    .desc   = "Number of times a VN0 credit was used on the DRS message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN0.  VNA is a shared pool used to achieve high performance.  The VN0 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN0 if they fail.  This counts the number of times a VN0 credit was used.  Note that a single VN0 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN0 will only count a single credit even though it may use multiple buffers.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vn0_credits_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vn0_credits_used),
  },
  { .name   = "UNC_R3_VN1_CREDITS_REJECT",
    .code   = 0x39,
    .desc   = "Number of times a request failed to acquire a VN1 credit.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This therefore counts the number of times when a request failed to acquire either a VNA or VN1 credit and is delayed.  This should generally be a rare situation.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vn1_credits_reject,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vn1_credits_reject),
  },
  { .name   = "UNC_R3_VN1_CREDITS_USED",
    .code   = 0x38,
    .desc   = "Number of times a VN1 credit was used on the DRS message channel.  In order for a request to be transferred across QPI, it must be guaranteed to have a flit buffer on the remote socket to sink into.  There are two credit pools, VNA and VN1.  VNA is a shared pool used to achieve high performance.  The VN1 pool has reserved entries for each message class and is used to prevent deadlock.  Requests first attempt to acquire a VNA credit, and then fall back to VN1 if they fail.  This counts the number of times a VN1 credit was used.  Note that a single VN1 credit holds access to potentially multiple flit buffers.  For example, a transfer that uses VNA could use 9 flit buffers and in that case uses 9 credits.  A transfer on VN1 will only count a single credit even though it may use multiple buffers.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vn1_credits_used,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vn1_credits_used),
  },
  { .name   = "UNC_R3_VNA_CREDITS_ACQUIRED",
    .code   = 0x33,
    .desc   = "Number of QPI VNA Credit acquisitions.  This event can be used in conjunction with the VNA In-Use Accumulator to calculate the average lifetime of a credit holder.  VNA credits are used by all message classes in order to communicate across QPI.  If a packet is unable to acquire credits, it will then attempt to use credts from the VN0 pool.  Note that a single packet may require multiple flit buffers (i.e. when data is being transfered).  Therefore, this event will increment by the number of credits acquired in each cycle.  Filtering based on message class is not provided.  One can count the number of packets transfered in a given message class using an qfclk event.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vna_credits_acquired,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vna_credits_acquired),
  },
  { .name   = "UNC_R3_VNA_CREDITS_REJECT",
    .code   = 0x34,
    .desc   = "Number of attempted VNA credit acquisitions that were rejected because the VNA credit pool was full (or almost full).  It is possible to filter this event by message class.  Some packets use more than one flit buffer, and therefore must acquire multiple credits.  Therefore, one could get a reject even if the VNA credits were not fully used up.  The VNA pool is generally used to provide the bulk of the QPI bandwidth (as opposed to the VN0 pool which is used to guarantee forward progress).  VNA credits can run out if the flit buffer on the receiving side starts to queue up substantially.  This can happen if the rest of the uncore is unable to drain the requests fast enough.",
    .modmsk = BDX_UNC_R3QPI_ATTRS,
    .cntmsk = 0x3,
    .ngrp   = 1,
    .umasks = bdx_unc_r3_vna_credits_reject,
    .numasks= LIBPFM_ARRAY_SIZE(bdx_unc_r3_vna_credits_reject),
  },
};

