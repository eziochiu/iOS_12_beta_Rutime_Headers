/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKEventIdentifier : NSObject {
    const struct IOMappings { struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; } * _ioMappings;
    RKMontrealModel * _model;
    int  _outputPermutation;
    RKNLEventTokenizer * _tokenizer;
}

- (void).cxx_destruct;
- (id)_identifyOwnedTokenSequences:(id)arg1;
- (id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(struct RKEventIdentifierRange { unsigned long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg3;
- (id)identifyMessage:(id)arg1;
- (id)identifyStrings:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)init;
- (id)initWithLanguageID:(id)arg1;
- (void)resetEventIdentifierModel;

@end
