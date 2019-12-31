/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
 */

@interface ASFAsn1ReceiptToken : NSObject {
    ASFAsn1Token * mContentToken;
    unsigned long long  mType;
    unsigned long long  mTypeVersion;
}

@property (readonly) ASFAsn1Token *contentToken;
@property (readonly) unsigned long long integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;

+ (id)readFromBuffer:(const char *)arg1;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3;
- (bool)contentIsAnInteger;
- (id)contentToken;
- (id)description;
- (unsigned long long)integerValue;
- (id)stringValue;
- (unsigned long long)type;
- (unsigned long long)typeVersion;

@end
