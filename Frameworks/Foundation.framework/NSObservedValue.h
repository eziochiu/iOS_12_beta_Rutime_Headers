/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSObservedValue : NSObject {
    id  _contents;
    id  _lastOriginator;
    int  _tag;
}

@property (retain) NSError *error;
@property bool finished;
@property (retain) id value;

- (bool)_isToManyChangeInformation;
- (id)copyToHeap;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (bool)finished;
- (void)setError:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
