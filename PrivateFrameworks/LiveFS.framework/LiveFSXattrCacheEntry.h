/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@interface LiveFSXattrCacheEntry : NSObject {
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _addedTime;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _lastUsedTime;
    NSData * _xattrData;
}

@property (readonly) struct timespec { long long x1; long long x2; } addedTime;
@property struct timespec { long long x1; long long x2; } lastUsedTime;
@property (readonly) NSData *xattrData;

- (void).cxx_destruct;
- (struct timespec { long long x1; long long x2; })addedTime;
- (id)initWithData:(id)arg1 andTime:(const struct timespec { long long x1; long long x2; }*)arg2;
- (bool)isExpiredAsOf:(const struct timespec { long long x1; long long x2; }*)arg1 forLifetime:(unsigned long long)arg2;
- (struct timespec { long long x1; long long x2; })lastUsedTime;
- (void)setLastUsedTime:(struct timespec { long long x1; long long x2; })arg1;
- (id)xattrData;

@end
