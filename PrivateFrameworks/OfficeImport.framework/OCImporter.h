/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCImporter : OCMapper {
    NSString * _lastPasswordAttempted;
    NSData * mData;
    OITSUProgressContext * mProgressContext;
    OCDReader * mReader;
    TCImportTracing * mTracing;
    bool  mTryAlternateReader;
    NSURL * mURL;
}

@property (nonatomic, copy) NSString *lastPasswordAttempted;
@property (retain) OITSUProgressContext *progressContext;
@property (nonatomic, readonly) TCImportTracing *tracing;

+ (void)initialize;

- (void)dealloc;
- (id)displayName;
- (id)filename;
- (void)finalizeWithDocumentState:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isDocumentEncryptedUnsupportedVersion:(bool*)arg1 errorMessage:(id*)arg2;
- (bool)isDocumentEncryptedUnsupportedVersionHelper:(bool*)arg1 errorMessage:(id*)arg2 readError:(bool*)arg3;
- (bool)isXML;
- (id)lastPasswordAttempted;
- (id)progressContext;
- (void)setLastPasswordAttempted:(id)arg1;
- (bool)setPassphrase:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)start;
- (id)tracing;
- (bool)tryAlternateReader;
- (id)url;

@end
