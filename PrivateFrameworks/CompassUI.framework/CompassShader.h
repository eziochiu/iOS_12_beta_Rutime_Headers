/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CompassShader : NSObject {
    NSString * _fragmentName;
    unsigned int  _program;
    NSArray * _uniformNames;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _uniforms;
    NSString * _vertexName;
}

@property (nonatomic) unsigned int program;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)compileShader:(unsigned int*)arg1 type:(unsigned int)arg2 file:(id)arg3;
- (void)dealloc;
- (id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3;
- (id)initWithName:(id)arg1 uniformNames:(id)arg2;
- (bool)linkProgram:(unsigned int)arg1;
- (bool)loadShader;
- (int)locationForUniform:(id)arg1;
- (unsigned int)program;
- (void)setProgram:(unsigned int)arg1;
- (void)use;
- (bool)validateProgram:(unsigned int)arg1;

@end
