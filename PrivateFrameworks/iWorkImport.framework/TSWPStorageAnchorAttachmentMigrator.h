/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageAnchorAttachmentMigrator : NSObject {
    NSMutableArray * _charIndexPlacementIndexArray;
}

@property (nonatomic, retain) NSMutableArray *charIndexPlacementIndexArray;

- (void).cxx_destruct;
- (id)charIndexPlacementIndexArray;
- (id)commandsForDidInsertIntoDestinationWPStorage:(id)arg1 insertionLocation:(unsigned long long)arg2 dolcContext:(id)arg3;
- (id)didCopyFromSourceWPStorage:(id)arg1 toTemporaryStorage:(id)arg2 copiedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setCharIndexPlacementIndexArray:(id)arg1;

@end
