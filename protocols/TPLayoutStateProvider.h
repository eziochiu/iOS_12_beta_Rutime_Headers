/* made by EzioChiu.
 */

@protocol TPLayoutStateProvider <NSObject>

@required

- (unsigned long long)bodyLengthForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (NSArray *)sectionHintsForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1;

@end
