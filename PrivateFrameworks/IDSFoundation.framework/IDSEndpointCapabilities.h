/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {
    BOOL  _ecVersion;
    BOOL  _isC2KEquipment;
    BOOL  _nicknamesVersion;
    BOOL  _optionallyReceiveTypingIndicator;
    BOOL  _showPeerErrors;
    BOOL  _supportsAcknowledgementsV1;
    BOOL  _supportsActivitySharing;
    BOOL  _supportsAnimojiV2;
    BOOL  _supportsAudioMessagingV2;
    BOOL  _supportsAutoloopVideoV1;
    BOOL  _supportsBubbleEditingV1;
    BOOL  _supportsCertifiedDeliveryV1;
    BOOL  _supportsChatAppsV1;
    BOOL  _supportsFullScreenMomentsV1;
    BOOL  _supportsFullScreenMomentsV2;
    BOOL  _supportsFullScreenMomentsV3;
    BOOL  _supportsImpactEffectsV1;
    BOOL  _supportsIncomingFindMyV1;
    BOOL  _supportsInlineAttachments;
    BOOL  _supportsInvisibleInkV1;
    BOOL  _supportsKeepReceipts;
    BOOL  _supportsLocationSharing;
    BOOL  _supportsMediaV2;
    BOOL  _supportsOriginalTimestampOrderingV1;
    BOOL  _supportsPhotosExtensionV1;
    BOOL  _supportsProtobufPayloadDataV2;
    BOOL  _supportsScreenTimeV2;
    BOOL  _supportsStickersV1;
    BOOL  _supportsUpdateAttachmentsV1;
}

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpointCapabilites:(id)arg1;
- (long long)valueForCapability:(id)arg1;

@end
