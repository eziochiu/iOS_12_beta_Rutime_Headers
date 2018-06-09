/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    long long  _readingLinkResolutionCount;
    NSFileAccessNode * _readingLocation;
    unsigned long long  _readingOptions;
    NSURL * _readingURL;
    bool  _readingURLDidChange;
    NSFileAccessNode * _rootNode;
    NSFileAccessNode * _writingLocation;
    unsigned long long  _writingOptions;
    NSURL * _writingURL;
    bool  _writingURLDidChange;
}

+ (bool)supportsSecureCoding;

- (id)allURLs;
- (bool)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(id /* block */)arg6;
- (void)invokeClaimer;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)arg1;
- (bool)shouldCancelInsteadOfWaiting;

@end
