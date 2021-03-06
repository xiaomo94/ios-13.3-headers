/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLSyncSession : NSObject {
    NSDate * _expectedDate;
    <CPLSyncSessionRescheduler> * _rescheduler;
    unsigned long long  _sequenceNumber;
}

@property (getter=isDetached, nonatomic, readonly) bool detached;
@property (nonatomic, readonly) NSDate *expectedDate;
@property (nonatomic, readonly) bool mightNeedForegroundToStart;
@property (nonatomic, retain) <CPLSyncSessionRescheduler> *rescheduler;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly) bool shouldDefer;
@property (nonatomic, readonly) NSString *whenItWillStartDescription;

+ (id)detachedSyncSession;

- (void).cxx_destruct;
- (void)deferWithBlock:(id /* block */)arg1;
- (id)description;
- (void)dropExpectedDate;
- (void)engineIsClosing;
- (id)expectedDate;
- (id)initWithSequenceNumber:(unsigned long long)arg1 expectedDate:(id)arg2;
- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;
- (bool)isDetached;
- (bool)isInLessThanTimeInterval:(double)arg1;
- (bool)isInMoreThanTimeInverval:(double)arg1;
- (bool)mightNeedForegroundToStart;
- (id)rescheduler;
- (unsigned long long)sequenceNumber;
- (void)sessionIsDone;
- (void)sessionWontHappen;
- (void)setRescheduler:(id)arg1;
- (bool)shouldDefer;
- (id)whenItWillStartDescription;

@end
