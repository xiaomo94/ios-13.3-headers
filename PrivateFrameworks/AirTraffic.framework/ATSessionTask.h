/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATSessionTask : NSObject <NSCopying, NSSecureCoding> {
    bool  _cancelled;
    unsigned long long  _completedItemCount;
    NSArray * _currentItemDescriptions;
    NSArray * _currentItems;
    NSError * _error;
    double  _finishTime;
    bool  _finished;
    NSString * _localizedDescription;
    double  _progress;
    NSDictionary * _properties;
    bool  _running;
    ATSession * _session;
    NSString * _sessionGroupingKey;
    NSString * _sessionTaskIdentifier;
    double  _startTime;
    NSNumber * _totalBytesToTransfer;
    NSNumber * _totalBytesTransferred;
    unsigned long long  _totalItemCount;
}

@property (getter=isCancelled) bool cancelled;
@property unsigned long long completedItemCount;
@property (copy) NSArray *currentItemDescriptions;
@property (copy) NSArray *currentItems;
@property (readonly) double duration;
@property (copy) NSError *error;
@property double finishTime;
@property (getter=isFinished) bool finished;
@property (copy) NSString *localizedDescription;
@property double progress;
@property (copy) NSDictionary *properties;
@property (getter=isRunning) bool running;
@property ATSession *session;
@property (copy) NSString *sessionGroupingKey;
@property (copy) NSString *sessionTaskIdentifier;
@property double startTime;
@property (copy) NSNumber *totalBytesToTransfer;
@property (copy) NSNumber *totalBytesTransferred;
@property unsigned long long totalItemCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (id)baseClassRepresentation;
- (void)cancel;
- (unsigned long long)completedItemCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentItemDescriptions;
- (id)currentItems;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (double)finishTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isRunning;
- (id)localizedDescription;
- (double)progress;
- (id)properties;
- (id)session;
- (id)sessionGroupingKey;
- (id)sessionTaskIdentifier;
- (void)setCancelled:(bool)arg1;
- (void)setCompletedItemCount:(unsigned long long)arg1;
- (void)setCurrentItemDescriptions:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishTime:(double)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProperties:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionGroupingKey:(id)arg1;
- (void)setSessionTaskIdentifier:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTotalBytesToTransfer:(id)arg1;
- (void)setTotalBytesTransferred:(id)arg1;
- (void)setTotalItemCount:(unsigned long long)arg1;
- (void)start;
- (double)startTime;
- (id)totalBytesToTransfer;
- (id)totalBytesTransferred;
- (unsigned long long)totalItemCount;

@end
