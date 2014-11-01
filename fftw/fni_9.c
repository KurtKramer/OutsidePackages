/*
 * Copyright (c) 1997-1999 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Nov  7 20:44:07 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddleinv 9 */

/*
 * This function contains 80 FP additions, 40 FP multiplications,
 * (or, 60 additions, 20 multiplications, 20 fused multiply/add),
 * 30 stack variables, and 36 memory accesses
 */
static const fftw_real K642787609 = FFTW_KONST(+0.642787609686539326322643409907263432907559884);
static const fftw_real K766044443 = FFTW_KONST(+0.766044443118978035202392650555416673935832457);
static const fftw_real K939692620 = FFTW_KONST(+0.939692620785908384054109277324731469936208134);
static const fftw_real K342020143 = FFTW_KONST(+0.342020143325668733044099614682259580763083368);
static const fftw_real K984807753 = FFTW_KONST(+0.984807753012208059366743024589523013670643252);
static const fftw_real K173648177 = FFTW_KONST(+0.173648177666930348851716626769314796000375677);
static const fftw_real K866025403 = FFTW_KONST(+0.866025403784438646763723170752936183471402627);
static const fftw_real K500000000 = FFTW_KONST(+0.500000000000000000000000000000000000000000000);

/*
 * Generator Id's : 
 * $Id: fni_9.c,v 1.1 2007/12/21 21:56:01 kkramer Exp $
 * $Id: fni_9.c,v 1.1 2007/12/21 21:56:01 kkramer Exp $
 * $Id: fni_9.c,v 1.1 2007/12/21 21:56:01 kkramer Exp $
 */

void fftwi_no_twiddle_9(const fftw_complex *input, fftw_complex *output, int istride, int ostride)
{
     fftw_real tmp5;
     fftw_real tmp37;
     fftw_real tmp57;
     fftw_real tmp22;
     fftw_real tmp56;
     fftw_real tmp38;
     fftw_real tmp10;
     fftw_real tmp42;
     fftw_real tmp66;
     fftw_real tmp27;
     fftw_real tmp45;
     fftw_real tmp67;
     fftw_real tmp15;
     fftw_real tmp52;
     fftw_real tmp69;
     fftw_real tmp32;
     fftw_real tmp49;
     fftw_real tmp70;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp2;
	  fftw_real tmp3;
	  fftw_real tmp4;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = c_re(input[0]);
	  tmp2 = c_re(input[3 * istride]);
	  tmp3 = c_re(input[6 * istride]);
	  tmp4 = tmp2 + tmp3;
	  tmp5 = tmp1 + tmp4;
	  tmp37 = tmp1 - (K500000000 * tmp4);
	  tmp57 = K866025403 * (tmp2 - tmp3);
     }
     {
	  fftw_real tmp18;
	  fftw_real tmp19;
	  fftw_real tmp20;
	  fftw_real tmp21;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp18 = c_im(input[0]);
	  tmp19 = c_im(input[3 * istride]);
	  tmp20 = c_im(input[6 * istride]);
	  tmp21 = tmp19 + tmp20;
	  tmp22 = tmp18 + tmp21;
	  tmp56 = tmp18 - (K500000000 * tmp21);
	  tmp38 = K866025403 * (tmp20 - tmp19);
     }
     {
	  fftw_real tmp6;
	  fftw_real tmp23;
	  fftw_real tmp9;
	  fftw_real tmp44;
	  fftw_real tmp26;
	  fftw_real tmp41;
	  fftw_real tmp40;
	  fftw_real tmp43;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp6 = c_re(input[istride]);
	  tmp23 = c_im(input[istride]);
	  {
	       fftw_real tmp7;
	       fftw_real tmp8;
	       fftw_real tmp24;
	       fftw_real tmp25;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp7 = c_re(input[4 * istride]);
	       tmp8 = c_re(input[7 * istride]);
	       tmp9 = tmp7 + tmp8;
	       tmp44 = K866025403 * (tmp7 - tmp8);
	       tmp24 = c_im(input[4 * istride]);
	       tmp25 = c_im(input[7 * istride]);
	       tmp26 = tmp24 + tmp25;
	       tmp41 = K866025403 * (tmp25 - tmp24);
	  }
	  tmp10 = tmp6 + tmp9;
	  tmp40 = tmp6 - (K500000000 * tmp9);
	  tmp42 = tmp40 - tmp41;
	  tmp66 = tmp40 + tmp41;
	  tmp27 = tmp23 + tmp26;
	  tmp43 = tmp23 - (K500000000 * tmp26);
	  tmp45 = tmp43 - tmp44;
	  tmp67 = tmp44 + tmp43;
     }
     {
	  fftw_real tmp11;
	  fftw_real tmp28;
	  fftw_real tmp14;
	  fftw_real tmp48;
	  fftw_real tmp31;
	  fftw_real tmp51;
	  fftw_real tmp50;
	  fftw_real tmp47;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp11 = c_re(input[2 * istride]);
	  tmp28 = c_im(input[2 * istride]);
	  {
	       fftw_real tmp12;
	       fftw_real tmp13;
	       fftw_real tmp29;
	       fftw_real tmp30;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp12 = c_re(input[5 * istride]);
	       tmp13 = c_re(input[8 * istride]);
	       tmp14 = tmp12 + tmp13;
	       tmp48 = K866025403 * (tmp12 - tmp13);
	       tmp29 = c_im(input[5 * istride]);
	       tmp30 = c_im(input[8 * istride]);
	       tmp31 = tmp29 + tmp30;
	       tmp51 = K866025403 * (tmp30 - tmp29);
	  }
	  tmp15 = tmp11 + tmp14;
	  tmp50 = tmp11 - (K500000000 * tmp14);
	  tmp52 = tmp50 - tmp51;
	  tmp69 = tmp50 + tmp51;
	  tmp32 = tmp28 + tmp31;
	  tmp47 = tmp28 - (K500000000 * tmp31);
	  tmp49 = tmp47 - tmp48;
	  tmp70 = tmp48 + tmp47;
     }
     {
	  fftw_real tmp36;
	  fftw_real tmp16;
	  fftw_real tmp35;
	  fftw_real tmp17;
	  fftw_real tmp33;
	  fftw_real tmp34;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp36 = K866025403 * (tmp32 - tmp27);
	  tmp16 = tmp10 + tmp15;
	  tmp35 = tmp5 - (K500000000 * tmp16);
	  c_re(output[0]) = tmp5 + tmp16;
	  c_re(output[3 * ostride]) = tmp35 + tmp36;
	  c_re(output[6 * ostride]) = tmp35 - tmp36;
	  tmp17 = K866025403 * (tmp10 - tmp15);
	  tmp33 = tmp27 + tmp32;
	  tmp34 = tmp22 - (K500000000 * tmp33);
	  c_im(output[3 * ostride]) = tmp17 + tmp34;
	  c_im(output[6 * ostride]) = tmp34 - tmp17;
	  c_im(output[0]) = tmp22 + tmp33;
     }
     {
	  fftw_real tmp39;
	  fftw_real tmp61;
	  fftw_real tmp64;
	  fftw_real tmp58;
	  fftw_real tmp54;
	  fftw_real tmp55;
	  fftw_real tmp63;
	  fftw_real tmp62;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp59;
	       fftw_real tmp60;
	       fftw_real tmp46;
	       fftw_real tmp53;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp39 = tmp37 - tmp38;
	       tmp59 = (K173648177 * tmp45) + (K984807753 * tmp42);
	       tmp60 = (K342020143 * tmp52) - (K939692620 * tmp49);
	       tmp61 = tmp59 + tmp60;
	       tmp64 = K866025403 * (tmp60 - tmp59);
	       tmp58 = tmp56 - tmp57;
	       tmp46 = (K173648177 * tmp42) - (K984807753 * tmp45);
	       tmp53 = (K342020143 * tmp49) + (K939692620 * tmp52);
	       tmp54 = tmp46 - tmp53;
	       tmp55 = K866025403 * (tmp46 + tmp53);
	  }
	  c_re(output[2 * ostride]) = tmp39 + tmp54;
	  tmp63 = tmp39 - (K500000000 * tmp54);
	  c_re(output[8 * ostride]) = tmp63 - tmp64;
	  c_re(output[5 * ostride]) = tmp63 + tmp64;
	  c_im(output[2 * ostride]) = tmp58 + tmp61;
	  tmp62 = tmp58 - (K500000000 * tmp61);
	  c_im(output[5 * ostride]) = tmp55 + tmp62;
	  c_im(output[8 * ostride]) = tmp62 - tmp55;
     }
     {
	  fftw_real tmp65;
	  fftw_real tmp77;
	  fftw_real tmp80;
	  fftw_real tmp74;
	  fftw_real tmp72;
	  fftw_real tmp73;
	  fftw_real tmp79;
	  fftw_real tmp78;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp75;
	       fftw_real tmp76;
	       fftw_real tmp68;
	       fftw_real tmp71;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp65 = tmp37 + tmp38;
	       tmp75 = (K766044443 * tmp67) + (K642787609 * tmp66);
	       tmp76 = (K173648177 * tmp70) + (K984807753 * tmp69);
	       tmp77 = tmp75 + tmp76;
	       tmp80 = K866025403 * (tmp76 - tmp75);
	       tmp74 = tmp57 + tmp56;
	       tmp68 = (K766044443 * tmp66) - (K642787609 * tmp67);
	       tmp71 = (K173648177 * tmp69) - (K984807753 * tmp70);
	       tmp72 = tmp68 + tmp71;
	       tmp73 = K866025403 * (tmp68 - tmp71);
	  }
	  c_re(output[ostride]) = tmp65 + tmp72;
	  tmp79 = tmp65 - (K500000000 * tmp72);
	  c_re(output[7 * ostride]) = tmp79 - tmp80;
	  c_re(output[4 * ostride]) = tmp79 + tmp80;
	  c_im(output[ostride]) = tmp74 + tmp77;
	  tmp78 = tmp74 - (K500000000 * tmp77);
	  c_im(output[4 * ostride]) = tmp73 + tmp78;
	  c_im(output[7 * ostride]) = tmp78 - tmp73;
     }
}

fftw_codelet_desc fftwi_no_twiddle_9_desc =
{
     "fftwi_no_twiddle_9",
     (void (*)()) fftwi_no_twiddle_9,
     9,
     FFTW_BACKWARD,
     FFTW_NOTW,
     210,
     0,
     (const int *) 0,
};
