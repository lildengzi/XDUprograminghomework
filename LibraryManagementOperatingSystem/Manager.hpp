// === Region: Headers ===
// iostream,string are included.
// Do not include extra header files
// =======================
#pragma once
#ifndef _Manager_HPP
#define _Manager_HPP

#include "Book.hpp"
#include "AbstractUser.hpp"

#include <iostream>
#include <string>
#include <memory>
#include <map>

/** === Region: class Manager ===
 * @todo 管理员菜单包括图书和读者信息录入、修改和删除。
 * @class AbstractUser
 */
class Manager: public AbstractUser
{
private:

public:
    /**
     * @brief 添加书籍
     * @param t_id 书籍id
     * @param t_name 书籍名
     * @param t_quantity 进货数量
     * @return bool 
     *      @retval true 添加成功
     *      @retval false 添加失败
     */
    bool addBook(const std::string& t_id, const std::string& t_name, const int& t_quantity)
    {
        // if (uptr_book != 0)
        // {
        //     std::cout << "添加成功" << std::endl;
        //     return true;
        // }
        // else
        // {
        //     std::cout << "添加失败" << std::endl;
        //     return false;
        // }

        return false;
    }

    /**
     * @brief 添加读者
     * @param t_id 读者id
     * @param t_name 读者名
     * @return bool 
     *      @retval true 添加成功
     *      @retval false 添加失败
     */
    bool addReader()
    {
        return false;
    }
};

#endif //_Manager_HPP
