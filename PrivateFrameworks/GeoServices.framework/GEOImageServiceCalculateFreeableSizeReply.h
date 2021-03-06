/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOImageServiceCalculateFreeableSizeReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
