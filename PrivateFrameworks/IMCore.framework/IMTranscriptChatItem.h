/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem> {
    unsigned char  _attachmentContiguousType;
    unsigned int  _contiguousLoaded;
    unsigned char  _contiguousType;
    NSString * _guid;
}

@property (nonatomic, readonly) unsigned char attachmentContiguousType;
@property (getter=isContiguous, nonatomic, readonly) bool contiguous;
@property (nonatomic, readonly) unsigned char contiguousType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (setter=_setGUID:, nonatomic, copy) NSString *guid;
@property (nonatomic, readonly) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *transcriptDate;
@property (nonatomic, readonly, copy) NSAttributedString *transcriptText;
@property (nonatomic, readonly) bool wantsTail;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (bool)_isContiguousLoaded;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(bool)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setGUID:(id)arg1;
- (unsigned char)attachmentContiguousType;
- (unsigned char)contiguousType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)guid;
- (id)handle;
- (unsigned long long)hash;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (bool)isContiguous;
- (bool)isContiguousWithChatItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (id)service;
- (id)transcriptDate;
- (id)transcriptText;
- (bool)wantsTail;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
