/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDReader : NSObject {
    <TCCancelDelegate> * mCancelDelegate;
    NSData * mData;
    <OCDReaderDelegate> * mDelegate;
    NSString * mFileName;
    bool  mIsThumbnail;
    NSError * mStartError;
    TCImportTracing * mTracing;
}

@property (nonatomic, retain) <TCCancelDelegate> *cancelDelegate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) <OCDReaderDelegate> *delegate;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) bool isThumbnail;
@property (nonatomic, retain) NSError *startError;
@property (nonatomic, retain) TCImportTracing *tracing;

- (id)cancelDelegate;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)fileName;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (bool)isBinaryReader;
- (bool)isThumbnail;
- (id)read;
- (void)setCancelDelegate:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsThumbnail:(bool)arg1;
- (void)setStartError:(id)arg1;
- (void)setStartErrorMessageFromException:(id)arg1;
- (void)setTracing:(id)arg1;
- (bool)start;
- (id)startError;
- (id)tracing;
- (bool)verifyFileFormat;

@end
