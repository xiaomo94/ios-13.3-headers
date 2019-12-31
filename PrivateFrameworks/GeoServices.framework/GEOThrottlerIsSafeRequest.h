/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest> {
    bool  _availableRequestCount;
    bool  _includeToken;
    bool  _nextSafeRequestTime;
    int  _requestKindSubtype;
    int  _requestKindType;
    GEODataRequestThrottlerToken * _throttlerToken;
}

@property (nonatomic) bool availableRequestCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeToken;
@property (nonatomic) bool nextSafeRequestTime;
@property (nonatomic) int requestKindSubtype;
@property (nonatomic) int requestKindType;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEODataRequestThrottlerToken *throttlerToken;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)availableRequestCount;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (bool)includeToken;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (bool)nextSafeRequestTime;
- (int)requestKindSubtype;
- (int)requestKindType;
- (void)setAvailableRequestCount:(bool)arg1;
- (void)setIncludeToken:(bool)arg1;
- (void)setNextSafeRequestTime:(bool)arg1;
- (void)setRequestKindSubtype:(int)arg1;
- (void)setRequestKindType:(int)arg1;
- (void)setThrottlerToken:(id)arg1;
- (id)throttlerToken;

@end