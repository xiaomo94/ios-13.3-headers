/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface MarkForDeletionResponse : GPBMessage

@property (nonatomic, copy) NSData *accountId;
@property (nonatomic) bool hasSmt;
@property (nonatomic) bool hasUriWitness;
@property (nonatomic, copy) NSString *serverEventInfo;
@property (nonatomic, retain) SignedMutationTimestamp *smt;
@property (nonatomic) int status;
@property (nonatomic, retain) VRFWitness *uriWitness;

+ (id)descriptor;

@end
