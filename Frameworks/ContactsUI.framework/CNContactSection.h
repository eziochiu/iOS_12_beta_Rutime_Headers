/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSection : NSObject <NSCopying> {
    NSString * _identifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _sortKey;
    NSString * _title;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *sortKey;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setIdentifier:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSortKey:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortKey;
- (id)title;

@end
