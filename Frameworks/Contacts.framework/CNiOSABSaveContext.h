/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABSaveContext : NSObject {
    NSMutableDictionary * _abAccountsByIdentifier;
    NSMutableDictionary * _abGroupsByIdentifier;
    NSMutableDictionary * _abPersonsByIdentifier;
    NSMutableDictionary * _abSourcesByIdentifier;
    void * _addressBook;
    NSMapTable * _contactIndicesByInstance;
    NSMapTable * _containerIndicesByInstance;
    NSMapTable * _groupIndicesByInstance;
    CNSaveRequest * _saveRequest;
    CNMutableSaveResponse * _saveResponse;
}

@property (nonatomic, retain) NSMutableDictionary *abAccountsByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *abGroupsByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *abPersonsByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *abSourcesByIdentifier;
@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly) NSMapTable *contactIndicesByInstance;
@property (nonatomic, readonly) NSMapTable *containerIndicesByInstance;
@property (nonatomic, readonly) NSMapTable *groupIndicesByInstance;
@property (nonatomic, readonly) CNSaveRequest *saveRequest;
@property (nonatomic, readonly) CNMutableSaveResponse *saveResponse;

- (void).cxx_destruct;
- (void)_populateSaveRequestIndexTables;
- (id)abAccountsByIdentifier;
- (id)abGroupsByIdentifier;
- (id)abPersonsByIdentifier;
- (id)abSourcesByIdentifier;
- (void*)addressBook;
- (id)contactIndicesByInstance;
- (id)containerIndicesByInstance;
- (void)dealloc;
- (id)groupIndicesByInstance;
- (id)indexPathForContactInstance:(id)arg1;
- (id)indexPathForContainerInstance:(id)arg1;
- (id)indexPathForGroupInstance:(id)arg1;
- (id)initWithSaveRequest:(id)arg1 response:(id)arg2 addressBook:(void*)arg3;
- (id)saveRequest;
- (id)saveResponse;
- (void)setAbAccountsByIdentifier:(id)arg1;
- (void)setAbGroupsByIdentifier:(id)arg1;
- (void)setAbPersonsByIdentifier:(id)arg1;
- (void)setAbSourcesByIdentifier:(id)arg1;

@end
