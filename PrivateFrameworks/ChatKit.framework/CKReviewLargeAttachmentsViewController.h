/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate> {
    NSArray * _attachments;
}

@property (nonatomic, retain) NSArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_populateAttachmentData;
- (id)_previewItem;
- (struct NSString { Class x1; }*)attachmentClass;
- (id)attachments;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (id)navigationBarTitle;
- (unsigned long long)numberOfModelObjects;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)reloadModelData;
- (void)setAttachments:(id)arg1;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;

@end
