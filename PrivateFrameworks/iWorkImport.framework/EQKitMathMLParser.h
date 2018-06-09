/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitMathMLParser : NSObject {
    struct AttributeCollection { int (**x1)(); struct map<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, std::__1::allocator<std::__1::pair<const std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; } * mAttributeCollection;
    EQKitEnvironmentInstance * mEnvironment;
    NSError * mError;
    struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; } * mNS;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } * mRootNode;
    NSData * mSource;
    struct stack<EQKitMathMLParserState, std::__1::deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState> > > { 
        struct deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState> > { 
            struct __split_buffer<EQKitMathMLParserState *, std::__1::allocator<EQKitMathMLParserState *> > { 
                int **__first_; 
                int **__begin_; 
                int **__end_; 
                struct __compressed_pair<EQKitMathMLParserState **, std::__1::allocator<EQKitMathMLParserState *> > { 
                    int **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<EQKitMathMLParserState> > { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  mState;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{AttributeCollection=^^?{map<std::__1::pair<id<EQKitLayoutNode>' */ struct *attributeCollection; /* unknown property attribute:  true> >=Q}}}} */
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*ns;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AttributeCollection { int (**x1)(); struct map<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, std::__1::allocator<std::__1::pair<const std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)attributeCollection;
- (void)dealloc;
- (id)environment;
- (id)error;
- (id)init;
- (id)initWithDocument:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 node:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 source:(id)arg3 environment:(id)arg4;
- (bool)isElement:(int)arg1 allowedInState:(int)arg2;
- (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)ns;
- (id)parse;
- (void)parseAttributesForNode:(id)arg1 withXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)parseChildrenAsArrayFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)parseChildrenAsNodeFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)parseChildrenAsTokenContentFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)parseNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)popState;
- (void)pushState:(int)arg1;
- (void)reportError:(long long)arg1 withNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (void)setAttributeCollection:(struct AttributeCollection { int (**x1)(); struct map<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, std::__1::allocator<std::__1::pair<const std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, std::__1::__value_type<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum>, EQKitTypes::Boolean::Enum>, std::__1::less<std::__1::pair<id<EQKitLayoutNode>, EQKitTypes::Attributes::Enum> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (int)state;

@end
