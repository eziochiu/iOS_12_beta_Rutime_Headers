/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTextWithInteriorWrapping : TSWPText {
    TSDWrapSegments * _cachedInteriorWrapSegments;
}

- (void).cxx_destruct;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;
- (bool)shrinkTextToFit;
- (id)textWrapper;
- (int)verticalAlignment;

@end
