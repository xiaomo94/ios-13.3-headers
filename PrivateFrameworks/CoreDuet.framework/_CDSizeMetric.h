/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSizeMetric : NSObject {
    unsigned long long  _count;
    _CDSizeMetricFamily * _family;
    unsigned long long  _firstSize;
    NSDate * _firstUpdate;
    unsigned long long  _lastSize;
    NSDate * _lastUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maximumSize;
    unsigned long long  _minimumSize;
    NSString * _name;
    unsigned long long  _scale;
    NSString * _string;
    unsigned long long  _totalSizes;
}

@property (readonly) double averageSize;
@property (readonly) unsigned long long count;
@property (readonly) _CDSizeMetricFamily *family;
@property (readonly) unsigned long long firstSize;
@property (readonly) NSDate *firstUpdate;
@property (readonly) unsigned long long lastSize;
@property (readonly) NSDate *lastUpdate;
@property (readonly) unsigned long long maximumSize;
@property (readonly) unsigned long long minimumSize;
@property (readonly) NSString *name;
@property (readonly) NSString *string;

- (void).cxx_destruct;
- (double)averageSize;
- (unsigned long long)count;
- (id)family;
- (unsigned long long)firstSize;
- (id)firstUpdate;
- (id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4;
- (unsigned long long)lastSize;
- (id)lastUpdate;
- (unsigned long long)maximumSize;
- (unsigned long long)minimumSize;
- (id)name;
- (id)string;

@end