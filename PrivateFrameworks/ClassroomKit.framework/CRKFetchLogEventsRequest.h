/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchLogEventsRequest : CATTaskRequest {
    NSDate * _cursorDate;
    NSString * _sessionToken;
}

@property (nonatomic, copy) NSDate *cursorDate;
@property (nonatomic, copy) NSString *sessionToken;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)cursorDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sessionToken;
- (void)setCursorDate:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end
