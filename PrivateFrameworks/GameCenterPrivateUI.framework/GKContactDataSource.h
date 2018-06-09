/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKContactDataSource : NSObject {
    NSArray * _contacts;
    NSArray * _sectionHeaders;
    NSDictionary * _sectionToContactIndexes;
    NSDictionary * _skipToContactIndexes;
    NSArray * _skipValues;
    CNContactStore * _store;
}

@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) NSArray *sectionHeaders;
@property (nonatomic, retain) NSDictionary *sectionToContactIndexes;
@property (nonatomic, retain) NSDictionary *skipToContactIndexes;
@property (nonatomic, retain) NSArray *skipValues;
@property (nonatomic, retain) CNContactStore *store;

- (id)contacts;
- (void)dealloc;
- (id)init;
- (void)loadContactsWithHandler:(id /* block */)arg1;
- (id)sectionHeaders;
- (id)sectionToContactIndexes;
- (void)setContacts:(id)arg1;
- (void)setSectionHeaders:(id)arg1;
- (void)setSectionToContactIndexes:(id)arg1;
- (void)setSkipToContactIndexes:(id)arg1;
- (void)setSkipValues:(id)arg1;
- (void)setStore:(id)arg1;
- (id)skipToContactIndexes;
- (id)skipValues;
- (id)store;

@end
