/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBoxedOutputDetectionTimingInfo : NSObject {
    int  _lastDetectionCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousDetectionDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousDetectionPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousNoDetectionPTS;
}

@property (nonatomic) int lastDetectionCount;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } previousDetectionDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } previousDetectionPTS;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } previousNoDetectionPTS;

- (id)init;
- (int)lastDetectionCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previousDetectionDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previousDetectionPTS;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previousNoDetectionPTS;
- (void)setLastDetectionCount:(int)arg1;
- (void)setPreviousDetectionDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreviousDetectionPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreviousNoDetectionPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
