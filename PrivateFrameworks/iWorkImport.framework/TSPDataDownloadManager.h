/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataDownloadManager : NSObject {
    TSPObjectContext * _context;
    <TSPDataDownloadManagerDelegate> * _delegate;
}

@property (nonatomic) <TSPDataDownloadManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
