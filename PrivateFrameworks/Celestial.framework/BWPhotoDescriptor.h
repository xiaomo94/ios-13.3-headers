/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPhotoDescriptor : NSObject {
    NSString * _photoIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
    bool  _presentationTimeStampHasBeenSet;
    unsigned int  _processingFlags;
    NSDate * _time;
    bool  _timeHasBeenSet;
    NSTimeZone * _timeZone;
    bool  _timeZoneHasBeenSet;
}

@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (nonatomic, readonly) unsigned int processingFlags;
@property (nonatomic, retain) NSDate *time;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void)dealloc;
- (id)description;
- (id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned int)arg2;
- (id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned int)arg2 time:(id)arg3 timeZone:(id)arg4 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (id)photoIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (unsigned int)processingFlags;
- (void)setPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTime:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)time;
- (id)timeZone;

@end
