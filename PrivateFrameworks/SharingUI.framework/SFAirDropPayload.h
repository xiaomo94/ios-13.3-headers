/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

@interface SFAirDropPayload : NSObject {
    NSURL * _URL;
    NSData * _data;
    long long  _identifer;
    NSString * _payloadDescription;
    UIImage * _previewImage;
    NSString * _type;
    bool  _wasString;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) long long identifer;
@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, retain) UIImage *previewImage;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) bool wasString;

+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;
+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;

- (void).cxx_destruct;
- (id)URL;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (long long)identifer;
- (bool)isEqual:(id)arg1;
- (id)payloadDescription;
- (id)previewImage;
- (void)setData:(id)arg1;
- (void)setIdentifer:(long long)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setWasString:(bool)arg1;
- (id)type;
- (bool)wasString;

@end
