/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchBooksOperation : CATOperation {
    id /* block */  mBookLibraryProxy;
    NSMutableArray * mBooks;
    bool  mIncludeImages;
}

- (void).cxx_destruct;
- (id)initWithBookLibraryProxy:(id /* block */)arg1;
- (id)initWithBookLibraryProxy:(id /* block */)arg1 includeImages:(bool)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)parseBookMetadataOperationDidFail:(id)arg1;
- (void)parsePDFMetadataOperationDidFail:(id)arg1;

@end
