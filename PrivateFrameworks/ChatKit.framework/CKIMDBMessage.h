/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKIMDBMessage : CKDBMessage {
    int  _personID;
    NSString * _personName;
}

@property (nonatomic) int personID;
@property (nonatomic, retain) NSString *personName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecordID:(long long)arg1;
- (void)markAsRead;
- (int)personID;
- (id)personName;
- (void)resetIMPerson;
- (void)setPersonID:(int)arg1;
- (void)setPersonName:(id)arg1;

@end