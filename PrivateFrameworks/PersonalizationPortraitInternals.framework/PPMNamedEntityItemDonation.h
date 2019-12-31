/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMNamedEntityItemDonation : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct PPMNamedEntityDonationSource_ { unsigned long long x1; })arg2 is_new:(struct PPMBoolOption_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
