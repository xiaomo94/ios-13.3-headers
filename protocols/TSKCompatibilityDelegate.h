/* Generated by RuntimeBrowser.
 */

@protocol TSKCompatibilityDelegate <NSObject>

@required

- (Class)exportOptionsControllerClass;
- (NSArray *)exportableTypes;
- (Class)exporterClassForType:(NSString *)arg1 options:(NSDictionary *)arg2;
- (Class)importerClassForType:(NSString *)arg1 path:(NSString *)arg2;
- (NSString *)indexXmlFilename;
- (bool)isSageDocumentType:(NSString *)arg1;
- (bool)isTCMessageExceptionErrorDomain:(NSString *)arg1;
- (bool)isTextOnlyType:(NSString *)arg1;
- (NSString *)needNewerVersionIndexXmlContentString;
- (NSString *)nestedDocumentFilename;

@optional

- (NSString *)backwardsCompatibleTypeForType:(NSString *)arg1;
- (bool)isExportSupportedForType:(NSString *)arg1 exporterOptions:(NSDictionary *)arg2 documentRoot:(TSKDocumentRoot *)arg3;
- (NSString *)unsupportedExportMessageStringForType:(NSString *)arg1;

@end
