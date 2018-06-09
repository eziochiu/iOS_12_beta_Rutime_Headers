/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPMediaLibraryEntityPropertyTranslator : NSObject {
    struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { 
        struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _propertiesToFetchMap;
    struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { 
        struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _propertiesToSortMap;
    id /* block */  _sortTransformer;
    id /* block */  _valueTransformer;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::__1::map<std::__1::basic_string<char>' */ struct  propertiesToFetchMap; /* unknown property attribute:  mlcore::ModelPropertyBase *> > >}^{__shared_weak_count}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::__1::map<std::__1::basic_string<char>' */ struct  propertiesToSortMap; /* unknown property attribute:  mlcore::ModelPropertyBase *> > >}^{__shared_weak_count}} */
@property (nonatomic, copy) id /* block */ sortTransformer;
@property (nonatomic, copy) id /* block */ valueTransformer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *x1; struct __shared_weak_count {} *x2; })propertiesToFetchMap;
- (struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *x1; struct __shared_weak_count {} *x2; })propertiesToSortMap;
- (void)setPropertiesToFetchMap:(struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPropertiesToSortMap:(struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setSortTransformer:(id /* block */)arg1;
- (void)setValueTransformer:(id /* block */)arg1;
- (id /* block */)sortTransformer;
- (id /* block */)valueTransformer;

@end
