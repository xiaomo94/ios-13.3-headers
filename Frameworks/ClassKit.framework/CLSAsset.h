/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSAsset : CLSObject <CLSRelationable> {
    NSString * _brItemID;
    NSString * _brOwnerName;
    NSString * _brShareName;
    NSString * _brZoneName;
    bool  _original;
    NSString * _ownerPersonID;
    NSString * _relativePathWithinContainer;
    NSObject<OS_dispatch_queue> * _shareQueue;
    NSString * _ubiquitousContainerName;
    bool  _uploaded;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *brItemID;
@property (nonatomic, retain) NSString *brOwnerName;
@property (nonatomic, retain) NSString *brShareName;
@property (nonatomic, retain) NSString *brZoneName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isOriginal, nonatomic) bool original;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (nonatomic, retain) NSString *relativePathWithinContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ubiquitousContainerName;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (nonatomic, retain) NSURL *url;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createShareIfNeeded:(id /* block */)arg1;
- (bool)_deleteFileAtURL:(id)arg1 error:(id*)arg2;
- (id)_init;
- (id)_initWithFileURL:(id)arg1;
- (id)brItemID;
- (id)brOwnerName;
- (id)brShareName;
- (id)brZoneName;
- (void)createShareIfNeeded:(id /* block */)arg1;
- (bool)deleteFile:(id*)arg1;
- (void)deleteFileWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchUsersAndAddToShare:(id)arg1 completion:(id /* block */)arg2;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isOriginal;
- (bool)isUploaded;
- (void)mergeWithObject:(id)arg1;
- (id)ownerPersonID;
- (id)relativePathWithinContainer;
- (void)setBrItemID:(id)arg1;
- (void)setBrOwnerName:(id)arg1;
- (void)setBrShareName:(id)arg1;
- (void)setBrZoneName:(id)arg1;
- (void)setOriginal:(bool)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRelativePathWithinContainer:(id)arg1;
- (void)setUbiquitousContainerName:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)ubiquitousContainerName;
- (id)uploadFileIfNeeded:(id*)arg1;
- (id)url;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;
- (bool)validateObject:(id*)arg1;
- (void)willSaveObject;

@end
