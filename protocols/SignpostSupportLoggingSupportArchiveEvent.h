/* Generated by RuntimeBrowser.
 */

@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>

@required

- (unsigned long long)_machContinuousTimestamp;
- (NSString *)beginWallTimeStringWithTimeZoneName:(NSString *)arg1;
- (NSString *)endWallTimeStringWithTimeZoneName:(NSString *)arg1;
- (int)processID;
- (NSString *)processImagePath;
- (NSUUID *)processImageUUID;
- (NSString *)processName;
- (unsigned long long)processUniqueID;
- (void)setProcessID:(int)arg1;
- (void)setProcessImagePath:(NSString *)arg1;
- (void)setProcessImageUUID:(NSUUID *)arg1;
- (void)setProcessName:(NSString *)arg1;
- (void)setProcessUniqueID:(unsigned long long)arg1;
- (void)setThreadID:(unsigned long long)arg1;
- (void)setTv_sec:(long long)arg1;
- (void)setTv_usec:(int)arg1;
- (void)setTz_dsttime:(int)arg1;
- (void)setTz_minuteswest:(int)arg1;
- (void)set_machContinuousTimestamp:(unsigned long long)arg1;
- (unsigned long long)threadID;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

@end
