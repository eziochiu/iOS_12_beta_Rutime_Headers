/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<mlcore::LocalizedSearchScope> { 
        struct LocalizedSearchScope {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _coreScope;
    MPModelKind * _itemKind;
    MPPropertySet * _itemProperties;
    NSString * _name;
}

@property (nonatomic, readonly) struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope {} *x1; struct __shared_weak_count {} *x2; } coreScope;
@property (nonatomic, retain) MPModelKind *itemKind;
@property (nonatomic, readonly, copy) MPPropertySet *itemProperties;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope {} *x1; struct __shared_weak_count {} *x2; })coreScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3;
- (id)itemKind;
- (id)itemProperties;
- (id)name;
- (void)setItemKind:(id)arg1;

@end
