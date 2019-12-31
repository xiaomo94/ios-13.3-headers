/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSCPUMinimumUsageGrant : RBSGrant {
    double  _duration;
    unsigned long long  _percentage;
    unsigned char  _role;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) unsigned char role;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3;

- (id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3;
- (double)duration;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)percentage;
- (unsigned char)role;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)conflictsWithAttribute:(id)arg1;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
