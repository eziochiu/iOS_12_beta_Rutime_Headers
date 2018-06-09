/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDynamicListString : NSObject <HFStringGenerator> {
    NSArray * _stringList;
    NSString * _summaryFormat;
    NSString * _truncationFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *stringList;
@property (nonatomic, copy) NSString *summaryFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *truncationFormat;

- (void).cxx_destruct;
- (id)attributeStringsSortedBySize:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dynamicStringForSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (id)initWithList:(id)arg1 truncationFormat:(id)arg2 summaryFormat:(id)arg3;
- (bool)prefersDynamicString;
- (void)setStringList:(id)arg1;
- (void)setSummaryFormat:(id)arg1;
- (void)setTruncationFormat:(id)arg1;
- (id)stringList;
- (id)stringWithAttributes:(id)arg1;
- (id)summaryFormat;
- (id)truncationFormat;

@end
