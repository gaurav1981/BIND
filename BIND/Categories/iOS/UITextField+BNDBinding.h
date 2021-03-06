//
//  UIButton+BNDBinding.h
//  BIND
//
//  Created by Ben Clayton on 12/4/2015.
//

@import UIKit;
#import <Foundation/Foundation.h>

static NSString *const BNDBindingEditingChangedKeyPath = @"onEditingChanged";

@interface UITextField (BNDBinding)
@property (nonatomic) NSString *onEditingChanged;
@end