/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    double  _completeTime;
    bool  _completed;
    double  _createTime;
    __CFN_TransactionMetrics * _currentTransactionMetrics;
    double  _firstResumeTime;
    unsigned long long  _identifier;
    bool  _ignoreNextRedirection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _options;
    long long  _schedulingTier;
    __CFN_SessionMetrics * _sessionMetrics;
    NSMutableArray * _transactionMetrics;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic) double completeTime;
@property (nonatomic) bool completed;
@property (nonatomic) double createTime;
@property (retain) __CFN_TransactionMetrics *currentTransactionMetrics;
@property (nonatomic) double firstResumeTime;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) bool ignoreNextRedirection;
@property (nonatomic) long long options;
@property (nonatomic) long long schedulingTier;
@property (nonatomic, retain) __CFN_SessionMetrics *sessionMetrics;
@property (nonatomic, retain) NSMutableArray *transactionMetrics;

+ (long long)optionsFromTask:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (double)completeTime;
- (void)completeWithError:(id)arg1;
- (bool)completed;
- (void)completionHandlerEvent;
- (double)createTime;
- (id)currentTransactionMetrics;
- (void)delegateBegin:(SEL)arg1;
- (void)delegateEnd:(SEL)arg1;
- (void)delegateEvent:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)firstResumeTime;
- (unsigned long long)identifier;
- (bool)ignoreNextRedirection;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1 sessionMetrics:(id)arg2;
- (void)lockTransactionMetrics:(id /* block */)arg1;
- (void)nextTransaction:(unsigned long long)arg1 withNewRequest:(id)arg2;
- (long long)options;
- (void)resume;
- (long long)schedulingTier;
- (id)sessionMetrics;
- (void)setCompleteTime:(double)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCreateTime:(double)arg1;
- (void)setCurrentTransactionMetrics:(id)arg1;
- (void)setFirstResumeTime:(double)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIgnoreNextRedirection:(bool)arg1;
- (void)setOptions:(long long)arg1;
- (void)setSchedulingTier:(long long)arg1;
- (void)setSessionMetrics:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)suspend;
- (id)transactionMetrics;

@end
