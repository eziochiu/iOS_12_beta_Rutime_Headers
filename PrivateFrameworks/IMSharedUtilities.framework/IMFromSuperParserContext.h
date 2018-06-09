/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMFromSuperParserContext : IMAttributedStringParserContext {
    bool  _foundBreadcrumbText;
    NSMutableArray * _inlinedFileTransferGUIDs;
    NSMutableArray * _standaloneFileTransferGUIDs;
}

@property (nonatomic, readonly) bool foundBreadcrumbText;
@property (nonatomic, readonly, retain) NSArray *inlinedFileTransferGUIDs;
@property (nonatomic, readonly, retain) NSArray *standaloneFileTransferGUIDs;

- (void)dealloc;
- (bool)foundBreadcrumbText;
- (id)initWithAttributedString:(id)arg1;
- (id)inlinedFileTransferGUIDs;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 characters:(id)arg4;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundBreadcrumbText:(id)arg2 withOptions:(unsigned int)arg3;
- (void)parserDidStart:(id)arg1;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)standaloneFileTransferGUIDs;

@end
