/* PR rtl-optimization/18611 */
/* { dg-do compile } */
/* { dg-options "-O1 -fmove-loop-invariants" } */
/* { dg-require-effective-target gcc_internals } */

void dumpCineonChannelInfo ();
typedef struct {
	int channels_per_image;
	int channel[8];
} CineonImageInformation;
void
dumpCineonImageInfo(CineonImageInformation* imageInfo) {

	int i;
	for (i = 0; i < imageInfo->channels_per_image; ++i) {
		dumpCineonChannelInfo(&imageInfo->channel[i]);
	}
}


