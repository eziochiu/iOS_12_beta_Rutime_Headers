/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol> {
    unsigned long long  _bodyLength;
    unsigned long long  _documentPageIndex;
    unsigned long long  _lastPageCount;
    NSSet * _missingFonts;
    NSArray * _sectionHints;
    unsigned long long  _sectionIndex;
    unsigned long long  _sectionPageIndex;
}

- (void).cxx_destruct;
- (void)captureLayoutStateWithProvider:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_reset;
- (void)readLayoutStateWithConsumer:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
