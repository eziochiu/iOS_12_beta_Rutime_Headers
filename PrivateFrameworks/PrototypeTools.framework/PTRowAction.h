/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTRowAction : NSObject {
    id /* block */  _handler;
}

@property (nonatomic, readonly) id /* block */ handler;

+ (id)actionWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (bool)deselectsRowOnSuccess;
- (id /* block */)handler;

@end
