/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCImportTracing : TCTracing

- (void)dealloc;
- (id)initWithFilename:(id)arg1;
- (void)startImporting;
- (void)startProcessors;
- (void)startReading;
- (void)stopImporting;
- (void)stopProcessors;
- (void)stopReading;

@end
