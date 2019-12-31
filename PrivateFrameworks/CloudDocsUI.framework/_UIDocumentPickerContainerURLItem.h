/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {
    NSDate * _cachedContentModifiedDate;
    NSString * _cachedContentType;
    unsigned long long  _cachedIndentation;
    bool  _cachedIsAlias;
    NSString * _cachedSortPath;
    NSString * _cachedSubtitle;
    NSString * _cachedSubtitle2;
    NSArray * _cachedTags;
    NSString * _cachedTitle;
    long long  _cachedType;
    id  _generationIdentifier;
    NSURL * _url;
}

+ (id)defaultKeys;

- (void).cxx_destruct;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (bool)attributesModified:(id)arg1;
- (void)cacheValues;
- (id)contentType;
- (unsigned long long)indentationLevel;
- (id)initWithURL:(id)arg1;
- (bool)isAlias;
- (id)modificationDate;
- (bool)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (id)subtitle;
- (id)subtitle2;
- (id)tags;
- (id)title;
- (long long)type;
- (id)url;
- (id)urlInLocalContainer;

@end
