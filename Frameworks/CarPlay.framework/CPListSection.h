/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPListSection : NSObject <NSSecureCoding> {
    NSString * _header;
    NSArray * _items;
    NSString * _sectionIndexTitle;
}

@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *sectionIndexTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)header;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3;
- (id)itemAtIndex:(long long)arg1;
- (id)items;
- (long long)numberOfItems;
- (id)sectionIndexTitle;

@end
