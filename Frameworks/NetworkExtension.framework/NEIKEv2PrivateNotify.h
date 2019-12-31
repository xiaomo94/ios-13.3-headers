/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {
    NSData * _notifyData;
    unsigned short  _notifyStatus;
}

@property (nonatomic, retain) NSData *notifyData;
@property (nonatomic) unsigned short notifyStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)notifyData;
- (unsigned short)notifyStatus;
- (void)setNotifyData:(id)arg1;
- (void)setNotifyStatus:(unsigned short)arg1;

@end
