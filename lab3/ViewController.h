//
//  ViewController.h
//  lab3
//
//  Created by excel on 10/5/17.
//  Copyright © 2017 excelcodes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ClearTextDeleget.h"

@interface ViewController : UIViewController <ClearTextDeleget>

@property (weak, nonatomic) IBOutlet UITextField *MyInput;

@end

